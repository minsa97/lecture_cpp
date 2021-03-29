// 15_move_semantics.cpp
#include <iostream>
using namespace std;


class CTestData{
public:
	CTestData()	 { cout << "    CTestData()" << endl; }
	~CTestData() { cout << "    ~CTestData()" << endl; }

	CTestData(const CTestData &rhs) : x(rhs.x){
		cout << "    CTestData(const CTestData &)" << endl;
	}

	// 이동 생성자
	CTestData(CTestData &&rhs) : x(rhs.x){
		cout << "    CTestData(const CTestData &&)" << endl;
	}

	// 대입 연산자
	CTestData& operator=(const CTestData & rhs) {
		cout << "    CTestData& operator=" << endl;

		// 자기 자신에 대한 대입이면 아무것도 하지 않는다.
		if (this != &rhs)
			this->SetData(rhs.x);

		return *this;
	}

	// 이동 대입 연산자
	CTestData& operator=(const CTestData &&rhs) {
		cout << "    operator= &&" << endl;
		x = rhs.x;
		return *this;
	}

	int GetData() const { return x; }
	void SetData(int a) { x = a; }

private:
	int x = 0;
};

CTestData test(int t){
	cout << "  test() 함수 호출" << endl;
	CTestData a;
	a.SetData(t);
	cout << "  test() 함수 종료" << endl;

	return a;
}

int main(){
    cout << "프로그램 시작" << endl;
	CTestData b;	
	b = test(20);
	
	CTestData c(b);
    cout << "프로그램 종료" << endl;

	return 0;
}