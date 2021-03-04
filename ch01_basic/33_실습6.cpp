// 33_실습6.cpp
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
 
int main(void){
    string str1, str2;
    cout<<"새 암호를 입력하세요.>> "; 
    cin>>str1;
    cout<<"새 암호를 다시 한번 입력하세요.>> ";
    cin>>str2;
    
    if(str1.compare(str2)==0)
        cout<<"같습니다."<<endl;
    else
        cout<<"다릅니다."<<endl;
 
    
    /*char str1[100]={0,}, str2[100]={0,};
    cout<<"새 암호를 입력하세요.>> "; 
    cin>>str1;
    cout<<"새 암호를 다시 한번 입력하세요.>> ";
    cin>>str2;
    
    if(strcmp(str1,str2)==0)
        cout<<"같습니다."<<endl;
    else
        cout<<"다릅니다."<<endl;
    */
    return 0;
}