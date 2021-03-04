// 33_실습3.cpp

#include <iostream>
using namespace std;
int main(void){
    cout<<"숫자 3개를 입력하세요. --> ";
    int a,b,c;
    cin>>a>>b>>c;
    
    /*int max=a;
    if(max<b) max=b;
    if(max<c) max=c;
    
    cout<<"최대= "<<max<<endl;*/
    
    int max=(a>b)?(a>c)?a:c : (b>c)?b:c;
//                |________|  |_________|  
 
    cout<<"최대= "<<max<<endl;
     
    return 0;
}