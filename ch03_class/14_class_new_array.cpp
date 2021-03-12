// 14_class_new_array.cpp
#include <iostream>
using namespace std;
 
class CTest{
public:
    int data;
    CTest(){
        cout << "CTest::CTest()" << endl;
    }
 
    ~CTest(){
        cout << "~CTest::CTest()" << endl;
    }
};
 
int main(){
    cout << "*** Begin ***" << endl;

    // new 연산자를 이용해 동적으로 객체를 생성한다.
    CTest *pData = new CTest[3];
    pData[0].data=1;
    pData[1].data=2;
    pData[2].data=3;

    for(int i=0;i<3;i++)
        cout<<"pData["<<i<<"]="<<pData[i].data<<endl;

    // delete 연산자를 이용해 객체를 삭제한다.
    delete[] pData;

    cout << "*** End ***" << endl;
 
    return 0;
}