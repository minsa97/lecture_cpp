// 01_InheritSample.cpp
#include <iostream>
using namespace std;


class CMyData{
private:
	int x = 0;

public:
	CMyData() { cout << "CMyData()" << endl; }
	int GetData() { return x; }
	void SetData(int nParam) { x = nParam; }

protected:	  // 파생 클래스만 접근 가능
	void PrintData() { cout << "CMyData::PrintData()" << endl; }
};


class CMyDataEx : public CMyData {
public:
	CMyDataEx() { cout << "CMyDataEx()" << endl; }

	void Test(){
		PrintData();
		SetData(5);
		cout << CMyData::GetData() << endl;
	}
};

int main(){
	CMyDataEx data;

	// 기본 클래스(CMyData) 멤버에 접근
	data.SetData(10);
	cout << data.GetData() << endl;

	// 파생 클래스(CMyDataEx) 멤버에 접근
	data.Test();

	return 0;
}