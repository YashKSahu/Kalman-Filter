// A C++ Program to implement 1D Guassian

#include <bits/stdc++.h>
using namespace std;
#define M_PI 3.14159265358979323846

double f(double mu, double sigma2, double x){
    double prob = (1/(sqrt(2.0*M_PI*sigma2))) * exp(-0.5 * pow((x-mu), 2.0)/sigma2);
    return prob;
}

int main(){
    cout << f(10.0, 4.0, 8.0) << endl;
    return 0;
}