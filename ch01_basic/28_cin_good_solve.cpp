// 28_cin_good_solve.cpp

#include <iostream>
using namespace std;

int main(){
    int num=1;
    while(true){
        cout<<"숫자 입력 >> ";
        cin>>num;

        if(cin.good()){
            cout<<"정상 입력"<<endl;        
        }
        if(cin.fail()){
            cout<<"비정상 입력"<<endl;        
            cin.clear();
            cin.ignore(100,'\n');
        }
    }

    return 0;
}