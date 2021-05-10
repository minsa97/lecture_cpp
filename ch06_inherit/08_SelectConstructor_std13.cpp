// 08_SelectConstructor_std13.cpp

#include <iostream>
using namespace std;

class A{
public:
	A() { cout << "A()" << endl; }
	A(int nParam) { cout << "A(int)" << endl; }
	A(double dParam) { cout << "A(double)" << endl; }
};

class B : public A{
public:
	using A::A;
};

int main() {
	B a;
	cout << "**********" << endl;

	B b(5);
	cout << "**********" << endl;

	B c(3.3);

	return 0;
}
