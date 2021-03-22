// hangul_number.cpp

#include <iostream>
#include <string>
using namespace std;

string num[]={"","십","백","천","만","십만","백만","천만","억"};

int length(int x){
    int cnt=0;
    while(x){
        x=x/10;
        cnt++;
    }
    return cnt;
}

int power(int x){
    int ans=1;
    for(int i=0;i<x;i++)
        ans*=10;
    return ans;
}

int main(){
    int a=123456789;
    //cout<<"a= ";
    //cin>>a;

    // 자릿수
    int len=length(a);
    cout<<"len= "<<len<<endl;

    for(int i=len-1;i>=0;i--){
        int x=power(i);
        int y=a/x;
        a=a-y*x;
        cout<<y<<num[i];
    }
    cout<<endl;
    return 0;
}