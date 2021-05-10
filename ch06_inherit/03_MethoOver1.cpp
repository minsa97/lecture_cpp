// 03_MethoOver1.cpp

#include <iostream>
using namespace std;

class CMyData{
private:
	int x = 0;
public:
	int GetData() { return x; }
	void SetData(int nParam) { x = nParam; }
};


class CMyDataEx : public CMyData {
public:
	void SetData(int nParam){ // 기능 추가
		if (nParam < 0)
			CMyData::SetData(0);

		if (nParam > 10)
			CMyData::SetData(10);
	}
};


int main(){
	// 구형에서는 값을 보정하는 기능이 없다.
	CMyData a;
	a.SetData(-10);
	cout << a.GetData() << endl;

	// 새로 만든 신형에는 값을 보정하는 기능이 있다.
	CMyDataEx b;
	b.SetData(15);
	cout << b.GetData() << endl;

	return 0;
}