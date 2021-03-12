// 09_uniqe_ptr_exam.cpp

#include <iostream>
#include <memory>
#include "print_compiler.hpp"

using namespace std;

int main () {
    print_compiler();

    unique_ptr<double> dp{new double};
    *dp= 7;

    return 0;
}

