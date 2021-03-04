// 33_실습5.cpp
 
#include <iostream>
#include <string>
using namespace std;
 
int main(void){
#if 1
    char buf[100]={0,};
    
    cin.getline(buf, 99, '\n');
    
    int cnt=0;
    for(int i=0;buf[i];i++){
        if(buf[i]=='x')
            cnt++;
    }
#else    
    string buf;
    getline(cin, buf);    
    
    int cnt=0;
 
    for(int i=0;i<buf.length();i++){
        if(buf[i]=='x')
            cnt++;
    }
#endif
    cout<<cnt<<endl;
    
    return 0;
}
