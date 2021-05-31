// 07_LateBinding.cpp

#include <iostream>
using namespace std;

void AAA(){
    cout<<"* AAA() is called"<<endl;
}

void BBB(){
    cout<<"* BBB() is called"<<endl;
}

int main(){
    int n;
    cout<<"n= ";
    cin>>n;

    //void () *pf
    //void *pf ()
    void (*pf)()=NULL;

    if(n==1){
        pf=AAA;
    }
    else{
        pf=BBB;
    }

    pf();
    
    return 0;
}