// 33_실습4.cpp

#include <iostream>
using namespace std;
int main(void){
    cout<<"실수 5개를 입력하세요. --> ";
    double a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    
    double max=a;
    if(max<b) max=b;
    if(max<c) max=c;
    if(max<d) max=d;
    if(max<e) max=e;
    
    cout<<"최대= "<<max<<endl;    
     
    return 0;
}