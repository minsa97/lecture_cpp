// 33_실습10.cpp
#include <iostream>
#include <string>
using namespace std;
int main() {
    string a="Hello,World";
    for(int i=0;i<a.length();i++){
        cout<<a.substr(0,i+1)<<'\n';
    }

    return 0;
}