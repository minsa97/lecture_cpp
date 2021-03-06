// 19_constMethod.cpp
#include <iostream>
using namespace std;

class CTest{
public:
	CTest(int n) : x(n) { };
	~CTest() { }

	// 상수형 메서드로 선언 및 정의했다.
	int GetData() const	{
		// 멤버 변수의 값을 읽을 수는 있지만 쓸 수는 없다.
		return x;
	}

	int SetData(int n) { x = n; }

private:
	int x = 0;
};

int main(){
	CTest a(10);
	cout << a.GetData() << endl;

	return 0;
}