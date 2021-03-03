// 25_only_number.cpp

#include <iostream>
#include <limits.h>

using namespace std;

int main(){
    int num=1;
    while(true){        
        cout<<"한 자리 숫자입력(0~9만 입력) >> ";
        cin>>num;

        if(!cin){
            cout<<"  -- 숫자만 입력하세요."<<endl;
            cin.clear();
            cin.ignore(INT_MAX, '\n');
        }
    }

    return 0;
}