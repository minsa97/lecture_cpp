// 04_vTableSample.cpp

#include <iostream>
using namespace std;

class CMyData{
public:
	CMyData(){
		cout << "CMyData()" << endl;
	}

	virtual ~CMyData() {}
	virtual void TestFunc1() { }
	void TestFunc2() {
        cout << "** Nothing **" << endl;
    }
};

class CMyDataEx : public CMyData{
public:
	CMyDataEx(){
		cout << "CMyDataEx()" << endl;
	}

	virtual ~CMyDataEx() { }
	virtual void TestFunc1() { }
	void TestFunc2(){
		cout << "** Beautiful **" << endl;
	}
};

int main(){
	CMyData *pData = new CMyDataEx;
	pData->TestFunc2();
	delete pData;

	return 0;
}
