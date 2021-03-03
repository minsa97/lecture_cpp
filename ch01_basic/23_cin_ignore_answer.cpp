// 23_cin_ignore_answer.cpp

#include <iostream>
using namespace std;
int main(){
    int ch;
    cin.ignore(100,';');
    
    while((ch=cin.get())!=EOF){
        cout.put(ch);

        if(ch=='\n'){
            cin.ignore(100,';');
        }
    }

    return 0;
}