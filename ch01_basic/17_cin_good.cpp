// 17_cin_good.cpp

#include <iostream>
#include <string>
using namespace std;

int main(){
    string name, address;

    cout<<"이름을 입력하세요>> ";
    getline(cin, name);

    cout<<"주소를 입력하세요>> ";
    getline(cin, address);

    cout<<"이름: "<<name<<endl;
    cout<<"주소: "<<address<<endl;
    
    return 0;
}
