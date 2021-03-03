// 24_only_number.cpp

#include <iostream>
using namespace std;

int main(){
    char num='1';
    while(true){
        cout<<"한 자리 숫자입력(0~9만 입력) >> ";
        cin>>num;
        if(num<'0' || num>'9'){
            cout<<"  -- 숫자만 입력하세요."<<endl;
        }
    }
    // ctrl+c로 종료한다.

    return 0;
}