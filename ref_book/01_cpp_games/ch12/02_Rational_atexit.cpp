// 02_Rational_atexit.cpp

#include "02_Rational.h"

void onExit() { cout << "프로그램이 종료됩니다!" << endl; }

int main() {
	atexit(onExit);
	Rational r;
	cout << "r 입력(a/b): ";
	cin >> r;
	cout << "r = " << r << " = " << r.real() << endl;

    return 0;
}
