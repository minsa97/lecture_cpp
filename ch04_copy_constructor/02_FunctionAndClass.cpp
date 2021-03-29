// 02_FunctionAndClass.cpp

#include <iostream>
using namespace std;

class CTestData{
public:
	CTestData(int a) : x(a){
		cout << "CTestData(int)" << endl;
	}

	CTestData(const CTestData &rhs) : x(rhs.x){
		cout << "복사생성자: CTestData(const CTestData &)" << endl;
	}

	// 읽기 전용인 상수형 메서드.
	int GetData() const { return x; }

	void SetData(int a) { x = a; }

private:
	int x = 0;
};

// 매개변수가 CTestData 클래스 형식이므로 복사 생성자가 호출된다.
void TestFunc(CTestData x){
	cout << "-- TestFunc()" << endl;

	// 피호출자 함수에서 매개변수 인스턴스의 값을 변경한다.
	x.SetData(20);
}

int main(){
	cout << "*****Begin*****" << endl;
	CTestData a(10);
	TestFunc(a);

	// 함수 호출 후 a의 값을 출력한다.
	cout << "a: " << a.GetData() << endl;

	cout << "******End******" << endl;

	return 0;
}