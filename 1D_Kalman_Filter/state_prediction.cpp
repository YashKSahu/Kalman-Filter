//A C++ Program to calculate state prediction in Kalman filter
#include <bits/stdc++.h>
using namespace std;

double new_mean, new_var;

tuple<double, double> state_prediction(double mean1, double var1, double mean2, double var2){
	new_mean = mean1+mean2;
	new_var  = var1+var2;
	return make_tuple(new_mean, new_var);
}

int main(){
	tie(new_mean, new_var) = state_prediction(10,4,12,4);
	printf("[%0.4f, %0.4f]", new_mean, new_var);
	return 0;
}
