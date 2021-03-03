// 16_cin_not_good.cpp

#include <iostream>
#include <string>
using namespace std;

int main(){
    string name, address;

    cout<<"이름을 입력하세요>> ";
    cin>>name;

    cout<<"주소를 입력하세요>> ";
    cin>>address;

    cout<<"이름: "<<name<<endl;
    cout<<"주소: "<<address<<endl;
    
    return 0;
}
