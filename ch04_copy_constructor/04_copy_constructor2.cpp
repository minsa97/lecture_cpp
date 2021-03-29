// 04_copy_constructor2.cpp
#include <iostream>
using namespace std;

class CMyData{
public:
	CMyData() { cout << "CMyData()" << endl; }

	int GetData(void) const { return x; }
	void SetData(int a) { x = a; }

private:
	int x = 0;
};

int main(){
	// 디폴트 생성자가 호출되는 경우
	CMyData a;
	a.SetData(10);

	// 복사 생성자가 호출되는 경우
	CMyData b(a);
	cout << b.GetData() << endl;

	return 0;
}