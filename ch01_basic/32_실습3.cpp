// 32_실습3.cpp

#include <iostream>
using namespace std;

int f(int x){
    int sum=0;
    for(int i=1;i<=x;i++)
        sum+=i;
    return sum;
}
 
int main(void){
    int a;
    cout<<"원하는 수를 입력하시오. --> ";
    cin>>a;
    
    cout<<"1부터 "<<a<<"까지 합은 "<<f(a)<<"입니다."<<endl;    
    return 0;
}