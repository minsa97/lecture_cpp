// 01_VirtualFunction.cpp

#include <iostream>
using namespace std;

class A{
protected:
	int x = 10;
        
public:
	// 가상 함수로 선언 및 정의했다.
	virtual void PrintData(){
		cout << "CMyData: " << x << endl;
	}

	void TestFunc(){
		cout << "***TestFunc()***" << endl;

		// 하위 클래스의 함수가 호출된다!
		PrintData();
		cout << "****************" << endl;
	}
};

class B : public A{
public:
	virtual void PrintData(){
		cout << "B: " << x * 2 << endl;
	}
};

int main(){
	B child;
	child.PrintData();

	A &parent = child;

	// 하위 클래스의 함수가 호출된다.
	parent.PrintData();

	// 늘 마지막에 재정의된 함수가 호출된다!
	child.TestFunc();

	return 0;
}