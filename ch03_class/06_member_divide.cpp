// 06_member_divide.cpp

#include <iostream>
using namespace std;
 
class CTest{
    int x;
public:
    CTest(){
        cout<<"생성자 - CTest()"<<endl;
        x = 10;
    }

    void printData();
};

void CTest::printData(){
    cout <<"x: "<< x << endl;
}

int main(){
    cout<<"*** main() 시작 *** "<<endl;
    CTest t;
    t.printData();
 
    cout<<"*** main() 종료 *** "<<endl;
    return 0;
}