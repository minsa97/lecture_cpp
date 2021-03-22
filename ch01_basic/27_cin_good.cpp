// 27_cin_good.cpp

#include <iostream>
using namespace std;

int main(){
    int num=1;
    while(true){
        cout<<"숫자 입력 (input)>> ";
        cin>>num;

        if(cin.good()){
            cout<<"정상 입력(good)"<<endl;        
        }
        if(cin.fail()){
            cout<<"비정상 입력(bad)"<<endl;        
        }
    }

    return 0;
}