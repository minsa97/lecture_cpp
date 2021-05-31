// 06_EarlyBinding.cpp

#include <iostream>
using namespace std;

void AAA(){
    cout<<"* AAA() is called"<<endl;
}

int main(){
    AAA();
    return 0;
}