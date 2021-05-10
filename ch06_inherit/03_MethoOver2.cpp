// 03_MethoOver2.cpp

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
	CMyDataEx a;
    CMyData &rData=a;
	rData.SetData(15);
	cout <<"a: "<< a.GetData() << endl;
    cout <<"r: "<< rData.GetData() << endl;

	return 0;
}