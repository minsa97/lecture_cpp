// 01_auto_variable.cpp
#include <iostream>
using namespace std;

int main(){
    int a=10;
    int b(10);
    auto c(b);
    auto d{10};

    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
    cout<<"c= "<<c<<endl;
    cout<<"d= "<<d<<endl;
    return 0;
}