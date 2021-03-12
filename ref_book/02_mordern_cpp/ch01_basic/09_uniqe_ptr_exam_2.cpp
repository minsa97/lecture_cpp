// 09_uniqe_ptr_exam_2.cpp

#include <iostream>
#include <memory>
#include "print_compiler.hpp"

using namespace std;

unique_ptr<double> f(){
    return unique_ptr<double>{new double}; 
}

template <typename T>
void vector_add(unsigned size, const T& v1, const T& v2, T& s){
    for (unsigned i= 0; i < size; ++i)
	    s[i]= v1[i] + v2[i];
}

int main () {
    print_compiler();

    unique_ptr<double> dp{new double};
    *dp= 7;

    double* raw_dp= dp.get();
    // double d;
    // unique_ptr<double> dd{&d};

    // double* rp= dp;
    unique_ptr<double> dp2{move(dp)};
    dp2= move(dp);
    // unique_ptr<double> dp2{dp};
    // dp2= dp;

    unique_ptr<double> dp3;
    dp3= f();

    // unique_ptr<double> da{new double[3]};
    unique_ptr<double[]> da{new double[3]};
    for (unsigned i= 0; i < 3; ++i)
    	da[i]= i+2;
    
    unique_ptr<double[]> x{new double[3]}, y{new double[3]}, sum{new double[3]};
    for (unsigned i= 0; i < 3; ++i)
	    x[i]= i+2, y[i]= 4-2*i;

    vector_add(3, x, y, sum);
    
    for (unsigned i= 0; i < 3; ++i)
	    cout << sum[i] << ", ";

    return 0;
}

