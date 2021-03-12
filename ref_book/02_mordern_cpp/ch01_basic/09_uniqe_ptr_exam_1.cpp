// 09_uniqe_ptr_exam_1.cpp

#include <iostream>
#include <memory>
#include "print_compiler.hpp"

using namespace std;

unique_ptr<double> f(){
    return unique_ptr<double>{new double}; 
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

    return 0;
}

