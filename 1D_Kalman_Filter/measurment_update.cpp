// A C++ Program to Calculate Measurment Update in Kalman filter
#include <bits/stdc++.h>
#include <tuple>
using namespace std;

double new_mean, new_var;

tuple<double, double> measurement_update(double mean1, double var1, double mean2, double var2){
    new_mean = (mean1*var2 + mean2*var1)/(var1 + var2);
    new_var  = 1/(1/var1 + 1/var2);
    return make_tuple(new_mean, new_var);
}

int main(){
    tie(new_mean, new_var) = measurement_update(20, 5, 30, 5);
    printf("[%f, %f]", new_mean, new_var);
}
