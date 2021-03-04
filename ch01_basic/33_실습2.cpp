// 33_실습2.cpp

#include <iostream>
using namespace std;
 
int main(void){
    for(int i=2;i<=9;i++){
        for(int j=1;j<=9;j++){
            cout<<i<<'*'<<j<<'='<<i*j<<'\t';
        }
        cout<<endl;
    }
    return 0;
}