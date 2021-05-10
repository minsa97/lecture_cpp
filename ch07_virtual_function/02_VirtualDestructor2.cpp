// 02_VirtualDestructor1.cpp

#include <iostream>
using namespace std;

class A{
    char *pStr;
    
public:
	A() { pStr = new char[32]; }
	~A(){
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
    
    //부모의 생성자가 호출된다.
	delete pA;

	return 0;
}