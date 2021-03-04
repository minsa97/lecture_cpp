// 33_실습9.cpp
#include <iostream>
#include <string>
using namespace std;
int main() {
    string name;
    string address;
    int age;

    cout<<"이름 >> ";
    getline(cin, name);

    cout<<"주소 >> ";
    getline(cin, address);

    cout<<"나이 >> ";
    cin>>age;
    
    cout << address << ',' << name<< ','<< age<<"세"<<endl;

    return 0;
}