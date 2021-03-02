// 05_setf.cpp

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    // 기본으로 소숫점 뒤 5자리만 출력됨
    double pi=3.1415926535;
    cout<<pi<<endl;

    // 소수점 뒤 7자리를 출력
    cout.setf(ios::fixed, ios::floatfield); // 소수점 숫자부분을 고정시킴
    cout.precision(7); // precision 함수임
    cout<<pi<<endl;

    ///////////////////////////////////////
    // + 기호를 숫자앞에 출력
    int a=10, b=-100, c=20;
    cout.setf(ios::showpos);
    cout<<a<<endl;
    cout<<b<<endl;

    cout.unsetf(ios::showpos);
    cout<<c<<endl;

    return 0;
}
