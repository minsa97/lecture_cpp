// 11_typeCast_auto.cpp

#include <iostream>
using namespace std;

class CTestData{
public:
	explicit CTestData(int a) : x(a){}
	CTestData(const CTestData &rhs) : x(rhs.x){}

	int GetData() const { return x; }
	void SetData(int a) { x = a; }

    // CTestData에서 int로 형변환
    operator int(void){return x;}

private:
	int x = 0;
};

int main(){
	CTestData a(10);
    cout<<"a: "<<a.GetData()<<endl;

    // CTestData에서 int로 형변환
    cout<<"operator int(): "<<a<<endl;

    // c 스타일, 형변환 안되는 것도 강제로 시킴
    cout<<"c-style: "<<(int)a<<endl;

    // c++ 스타일, 적절한 형변환 연산즐 제공하면 형변환 시켜준다.
    cout<<"c++ style: "<<static_cast<int>(a)<<endl;

	return 0;
}