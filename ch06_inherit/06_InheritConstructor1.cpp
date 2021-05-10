// 06_InheritConstructor1.cpp

#include <iostream>
using namespace std;

class A{
public:
	A() {
		cout << "A()" << endl;
	}

	~A() {
		cout << "~A()" << endl;
	}
};

class B : public A{
public:
	B() {
		cout << "B()" << endl;
	}

	~B() {
		cout << "~B()" << endl;
	}
};

class C : public B{
public:
	C() {
		cout << "C()" << endl;
	}

	~C() {
		cout << "~C()" << endl;
	}
};

int main(){
	cout << "*****Begin*****" << endl;

	C data;

	cout << "******End******" << endl;

	return 0;
}