// 30_string_4.cpp

#include <iostream>
#include <string>
using namespace std;

int main(){
    string a="Hello, world";
    string b;
    b=a; // 깊은 복사가 일어난다. 수정하더라도 a는 변경되지 않는다.
    b+=", C++ coding";
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    
    return 0;
}