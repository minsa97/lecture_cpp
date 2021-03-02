// 08_digit_display.cpp

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int x=10;
    cout<<oct<<x<<endl;
    cout<<dec<<x<<endl;
    cout<<hex<<x<<endl<<endl;

    cout<<11<<endl;
    cout<<showbase<<11<<endl;
    cout<<uppercase<<12<<endl;

    // 설정 제거
    cout.unsetf(ios::hex | ios::showbase | ios::uppercase);
    cout<<12<<endl;

    return 0;
}