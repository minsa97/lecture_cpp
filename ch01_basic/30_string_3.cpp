// 30_string_3.cpp

#include <iostream>
#include <string>
using namespace std;

int main(){
    string a="Hello, world";
    
    cout<<"해당 위치의 문자: "<<a.at(3)<<endl;
    cout<<"찾은 위치: "<<a.find("world")<<endl;
    
    // 만약 찾지 못했으면
    if(a.find("hello")==string::npos){
        cout<<"hello 가 없습니다.";
    }
    return 0;
}