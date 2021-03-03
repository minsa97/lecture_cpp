// 19_cin_ignore.cpp

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int cnt;
    cout<<"count: ";
    cin>>cnt;

    char name[100];
    for(int i=0;i<cnt;i++){
        cout<<"enter your name: ";
        cin.getline(name, 100);

        cout<<i+1<<" : "<<name<<endl;
    }

    return 0;
}