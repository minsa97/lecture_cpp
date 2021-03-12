// 05_resetComplex_ref.cpp
#include <iostream>
#include <string>
using namespace std;

struct Complex {
	double	real;
	double	imag;
};

void printComplex(Complex c, string msg = "complex:") {
	cout<<msg<< c.real<<"+"<<c.imag<<"i"<<endl;
}

void resetComplex(Complex& a) { 
    a.real = a.imag = 0.0; 
}

int main(void){
	Complex c;
	resetComplex(c);
	printComplex(c, "reset(c)=");

    return 0;
}