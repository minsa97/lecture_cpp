// 10_typeCast_ref_explicit.cpp

#include <iostream>
using namespace std;

class CTestData{
public:
    // 매개변수가 하나뿐인 생성자는 형변환이 가능하다.
	explicit CTestData(int a) : x(a){
		cout << "CTestData(int)" << endl;
	}

    // 소멸자 추가
    ~CTestData(){
        cout << "~CTestData()" << endl;
    }

	CTestData(const CTestData &rhs) : x(rhs.x){
		cout << "복사생성자: CTestData(const CTestData &)" << endl;
	}

	int GetData() const { return x; }
	void SetData(int a) { x = a; }

private:
	int x = 0;
};

// 매개변수가 CTestData 클래스 형식이므로 변환생성이 가능하다.
// 상수를 레퍼런스로 받는다.
void TestFunc(const CTestData &x){
	cout << "-- TestFunc() : " << x.GetData()<< endl;
}

int main(){
	cout << "*****Begin*****" << endl;
	//TestFunc(5);
    TestFunc(CTestData(5)); // 명시적으로 선언해서 호출
	cout << "******End******" << endl;

	return 0;
}