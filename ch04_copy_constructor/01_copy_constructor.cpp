// 01_copy_constructor.cpp

#include <iostream>
using namespace std;

class CMyData{
public:
	CMyData() { cout << "CMyData()" << endl; }

	// 복사 생성자 선언 및 정의
	CMyData(const CMyData &rhs)
		// : x(rhs.m_nData)
	{
		this->x = rhs.x;
		cout << "CMyData(const CMyData &)" << endl;
	}

	int GetData(void) const { return x; }
	void SetData(int nParam) { x = nParam; }

private:
	int x = 0;
};

int main(){
	// 디폴트 생성자가 호출되는 경우.
	CMyData a;
	a.SetData(10);

	// 복사 생성자가 호출되는 경우
	CMyData b(a);
	cout << b.GetData() << endl;

	return 0;
}