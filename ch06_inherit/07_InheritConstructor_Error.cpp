// 07_InheritConstructor_Error.cpp

#include <iostream>
using namespace std;

class A{
protected:
	char *m_pszData;

public:
	A() {
		cout << "A()" << endl;
		m_pszData = new char[32];
	}

	~A() {
		cout << "~A()" << endl;
		delete m_pszData;
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
		delete m_pszData;
	}
};

int main(){
	cout << "*****Begin*****" << endl;

	C data;

	cout << "******End******" << endl;

	return 0;
}