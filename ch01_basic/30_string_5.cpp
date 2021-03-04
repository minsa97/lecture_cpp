// 30_string_5.cpp

#include <iostream>
#include <string>
using namespace std;

int main(){
    string a="apple";
    string b="banana";
    
    if(a.compare(b)==0){
        cout<<"같다."<<endl;
    }
    else if(a.compare(b)<0){
        cout<<"a가 사전순으로 앞이다."<<endl;
    }
    else if(a.compare(b)>0){
        cout<<"b가 사전순으로 앞이다."<<endl;
    }
    
    return 0;
}