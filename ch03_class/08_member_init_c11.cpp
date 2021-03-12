// 08_member_init_c11.cpp

#include <iostream>
using namespace std;
 
class CTest{
    int x=100;
    int y=200;
public:
    CTest(){
        cout<<"생성자 - CTest()"<<endl;
    }

    void printData(){
        cout <<"x: "<< x << endl;
        cout <<"y: "<< y << endl;
    }
};

int main(){
    cout<<"*** main() 시작 *** "<<endl;
    CTest t;
    t.printData();
 
    cout<<"*** main() 종료 *** "<<endl;
    return 0;
}