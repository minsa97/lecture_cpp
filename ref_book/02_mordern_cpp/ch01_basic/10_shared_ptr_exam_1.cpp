// 10_shared_ptr_exam_1.cpp
#include <iostream>
#include <memory>
#include "print_compiler.hpp"

using namespace std;

shared_ptr<double> f(){
    shared_ptr<double> p1{new double};
    shared_ptr<double> p2{new double};
    shared_ptr<double> p3;
    p3=p2;
    cout << "p3.use_count() = " << p3.use_count() << endl;
    cout << "End of f" << endl;
    return p3;
}

int main (){
    print_compiler();
    
    shared_ptr<double> p1= f();
    cout << "p1.use_count() = " << p1.use_count() << endl;
    
    return 0;
}
