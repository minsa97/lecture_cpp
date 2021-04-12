// 01_operator_over.cpp
#include <iostream>
using namespace std;

class CMyData{
public:
	// 변환 생성자
	CMyData(int nParam) : x(nParam){
	}

	// 복사 생성자
	CMyData(const CMyData &rhs) : x(rhs.x){
	}

	// 이동 생성자
	CMyData(const CMyData &&rhs) : x(rhs.x){
	}

	// 형변환
	operator int() { return x; }

	// +
	CMyData operator+(const CMyData &rhs){
		cout << "operator+" << endl;
		CMyData result(0);
		result.x = this->x + rhs.x;

		return result;
	}

	// =
	CMyData& operator=(const CMyData &rhs){
		cout << "operator=" << endl;
		x = rhs.x;

		return *this;
	}

private:
	int x = 0;
};

int main(){
	cout << "*****Begin*****" << endl;
	CMyData a(0), b(3), c(4);

	// b + c 연산을 실수행하면 이름 없는 임시 객체가 만들어지며
	// a에 대입하는 것은 이 임시 객체다.
	a = b + c;
	cout << a << endl;
	cout << "******End******" << endl;

	return 0;
}