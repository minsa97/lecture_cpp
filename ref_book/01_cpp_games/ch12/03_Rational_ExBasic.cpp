// 03_Rational_ExBasic.cpp

#include "03_Rational.h"

int main(){
	Rational r;
	cout << "r 입력(a/b): ";
	cin >> r;
	cout << "r = " << r << " = " << r.real() << endl;

    return 0;
}
