// 01_Rational_Assert.cpp

#include "01_Rational.h"

int main() {
	Rational r;
	cout << "r 입력(a/b): ";
	cin >> r;
	cout << "r = " << r << " = " << r.real() << endl;

    return 0;
}
