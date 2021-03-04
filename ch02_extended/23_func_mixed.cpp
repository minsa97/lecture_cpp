// 23_func_mixed.cpp

#include <iostream>
using namespace std;

#define Type1 100
#define Type2 200
 
int Calc(int nWidth, int nHeight, int nType=0){
    return nWidth*nHeight + nType;
}
 
int main(){
    // 예전 코드
    cout<< Calc(10, 5) <<endl;

    // 새로운 코드
    cout<< Calc(10, 5, Type1) << endl;
    return 0;
}
