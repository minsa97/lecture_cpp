// 29_namespace.cpp

#include <iostream>
#include "mike.h"
using namespace std;

void foo(){
    cout<<"foo"<<endl;
}

int main(){
    foo();
    mike::foo();
    return 0;
}