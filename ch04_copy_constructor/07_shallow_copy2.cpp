// 07_shallow_copy2.cpp

#include <iostream>
using namespace std;

class CMyData{
public:
	CMyData(int a){
		px = new int;
		*px = a;
	}

	// 복사 생성자 선언 및 정의
	CMyData(const CMyData &rhs){
		cout << "CMyData(const CMyData &)" << endl;
        delete px;
		px = new int;
		*px = *rhs.px;
	}

	~CMyData(){
		delete px;
	}

	// 단순 대입 연산자 함수를 정의한다.
	CMyData& operator=(const CMyData &rhs){
		*px = *rhs.px;
		return *this;
	}

	int GetData(){
		if (px != NULL)
			return *px;

		return 0;
	}

private:
	int *px = nullptr;
};

int main(){
	CMyData a(10);
	CMyData b(20);

	// 단순 대입을 시도하면 모든 멤버의 값을 그대로 복사한다.
	a = b;
	cout << a.GetData() << endl;

	return 0;
}