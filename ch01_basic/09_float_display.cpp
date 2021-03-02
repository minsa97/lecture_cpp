// 09_float_display.cpp

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    ////////////////////////////////////////////////////////
    // 유효숫자 설정
    cout.precision(4);
    cout<<"result 1: "<<12.123<<endl;
    cout<<"result 2: "<<3.1415926535<<endl;

    cout.precision(3);
    cout<<"result 3: "<<3.1415926535<<endl;

    cout.precision(10);
    cout<<"result 4: "<<12.123<<endl;

    // 유효숫자 설정하고 남은 것은 0으로 채운다.
    cout.precision(10);
    cout<<"result 5: "<<showpoint<<12.123<<endl;

    ////////////////////////////////////////////////////////
    // 수숫점 자리밑의 숫자 개수 고정
    cout<<"result 6: "<<fixed<<setprecision(15)<<12.123<<endl;

    // 수숫점 자리밑의 숫자 개수 고정
    cout<<"result 7: "<<fixed<<setprecision(3)<<setw(10)<<3.1415926535<<endl;
    cout<<"result 8: "<<fixed<<setprecision(3)<<setw(10)<<setfill('0')<<3.1415926535<<endl;
    cout<<"result 9: "<<fixed<<setprecision(3)<<setw(10)<<setfill('*')<<3.1415926535<<endl;


    ////////////////////////////////////////////////////////
    // scientific 
    cout.precision(6);
    cout<<"result10: "<<scientific<<1.2345<<endl;
    cout<<"result11: "<<scientific<<12.345<<endl;
    cout<<"result12: "<<scientific<<0.00000012345<<endl;
    return 0;
}