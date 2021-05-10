// 08_SelectConstructor.cpp

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
	B() { cout << "B()" << endl; }

	// 기본 클래스의 세 가지 생성자 중에서 int 변수를 갖는 생성자를 선택했다.
	B(int nParam) : A(nParam){
		cout << "B(int)" << endl;
	}
	// 기본 클래스의 디폴트 생성자를 선택했다.
	B(double dParam) : A(){
		cout << "B(double)" << endl;
	}
};

int main() {
	B a;
	cout << "**********" << endl;

	B b(5);
	cout << "**********" << endl;

	B c(3.3);

	return 0;
}
