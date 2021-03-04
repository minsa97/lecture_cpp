// 28_inline_func.cpp

#include <iostream>
using namespace std;
 
#define ADD(a, b)((a) + (b))
 
int add(int a, int b){
    return a + b;
}
 
inline int addNew(int a, int b){
    return a + b;
}
 
int main(){
    int a, b;
    cout<<"2 numbers: ";
    cin>>a>>b;

    cout<<"ADD(): "<< ADD(a, b) <<endl;
    cout<<"Add(): "<< add(a, b) <<endl;
    cout<<"AddNew(): "<< addNew(a, b) <<endl;
 
    return 0;
}