// 12_destructor.cpp
#include <iostream>
using namespace std;
 
class CTest{
    int data;
public:
    CTest(int x):data(x){
        cout << "CTest::CTest(int x)" << endl;
    }
 
    ~CTest(){
        cout << "~CTest::CTest()" << endl;
    }
};
 
int main(){
    cout << "*** Begin ***" << endl;
    CTest a(10);
    CTest b; // 에러발생
    cout << "*** End ***" << endl;
 
    return 0;
}