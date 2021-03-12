// 13_class_new.cpp
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

    CTest *a=new CTest;
    a->data=1234;
    cout<<"result: "<<a->data<<endl;
    delete a;

    cout << "*** End ***" << endl;
 
    return 0;
}