// 05_fn_tmep_Complex_class_double.cpp

#include <iostream>
#include <cmath>
using namespace std;

class Complex { 		// 복소수 클래스
	double	real, imag;	// 실수부와 허수부
public:
	Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {  }

	friend ostream& operator << (ostream& os, const Complex& c) {
		os << "(" << c.real << "," << c.imag << ")";
		return os;
	}

    operator double(){
        return sqrt(real*real + imag*imag);
    }
};

template < typename T >
void printArray(T a[], int len) {
	cout << "Array: ";
	for (int i = 0; i < len; i++)
		cout << a[i] << " ";
	cout << endl;
}

int main() {
	Complex cArr[3] = { 
        Complex(1, 1), 
        Complex(2, 2), 
        Complex(3, 3) 
    };

	printArray(cArr, 3);

    for(int i=0;i<3;i++){
        cout<<(double)cArr[i]<<'\n';
    }

    return 0;
}