// 03_VirtualDestructor2.cpp

#include <iostream>
using namespace std;

class A{
    char *pStr;
    
public:
	A() { pStr = new char[32]; }
	virtual ~A(){
		cout << "~A()" << endl;
		delete pStr;
	}
};

class B : public A{
    int *pInt;
    
public:
	B() { pInt = new int; }
	~B(){
		cout << "~B()" << endl;
		delete pInt;
	}
};


int main(){
	A *pA = new B;

	delete pA;

	return 0;
}