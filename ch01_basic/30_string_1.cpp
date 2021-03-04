// 30_string_1.cpp

#include <iostream>
#include <string>
using namespace std;

int main(){
    string a="John";
    a+=" Coding";
    cout<<"결과: "<<a<<endl;

    string b="Clair";
    b.append(" Programming");
    cout<<"결과: "<<b<<endl;
    return 0;
}