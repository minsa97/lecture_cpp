// 11_destructor.cpp
#include <iostream>
using namespace std;
 
class CTest{
public:
    CTest(){
        cout << "CTest::CTest()" << endl;
    }
 
    ~CTest(){
        cout << "~CTest::CTest()" << endl;
    }
};

CTest a;
 
int main(){
    cout << "*** Begin ***" << endl;
    
    cout << "*** End ***" << endl;
 
    return 0;
}