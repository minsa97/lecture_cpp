// 22_func_new.cpp

#include <iostream>
using namespace std;

#define Type1 100
#define Type2 200
 
int Calc(int nWidth, int nHeight, int nType){
    return nWidth*nHeight + nType;
}
 
int main(){
    cout<< Calc(10, 5, Type1) << endl;
    return 0;
}
