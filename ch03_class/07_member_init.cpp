// 07_member_init.cpp

#include <iostream>
using namespace std;
 
class CTest{
    int x;
    int y;
public:
    CTest():x(100), y(200){
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