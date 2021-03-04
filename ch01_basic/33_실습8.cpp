// 33_실습8.cpp
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str="Mozart;Elvis Presley;Jim Carry;Schubert;Domingo;";
    string ans;

    int prev = 0 , max=0;
    int pos=str.find(';',prev);
    while(pos!=string::npos){
        string name=str.substr(prev, pos-prev);
        cout<<name<<endl;
        if(max<name.length()){
            max=name.length();
            ans=name;
        }

        prev=pos+1;
        pos=str.find(';',prev);
    }

    cout << "가장 긴 이름은 " << ans << endl;
    return 0;
}