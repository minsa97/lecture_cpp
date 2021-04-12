// 08_operator_array_bound.cpp

#include <iostream>
#include <memory.h>
using namespace std;
 
class CintArray {
public:
    CintArray(int n){
        size=n;
        pData = new int[n];
        memset(pData, 0, sizeof(int) * n);
    }
 
    ~CintArray() { delete pData; }
 
    // 상수형 참조인 경우의 배열연산자
    int operator[] (int i) const {
        if(i<0 || i>=size){
            cout<<"out of bound(1)"<<endl;
            exit(1);
        }
        return pData[i];
    }
 
    // 일반적인 배열 연산자
    int& operator[] (int i){
        if(i<0 || i>=size){
            cout<<"out of bound(2)"<<endl;
            exit(1);
        }
        return pData[i];
    }
 
private:
    int *pData;
    int size;
};

int main(){
    CintArray arr(5);
    for (int i = 0; i < 5; ++i)
        arr[i] = (i+1)*10;
    
    arr[-1]=100;
    cout<<arr[-1]<<endl;
    return 0;
}