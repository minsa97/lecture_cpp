// 07_operator_array.cpp

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
        cout << "operator[] const" << endl;
        return pData[i];
    }
 
    // 일반적인 배열 연산자
    int& operator[] (int i){
        cout << "operator[]" << endl;
        return pData[i];
    }
 
private:
    int *pData;
    int size;
};
 
void test(const CintArray &arr){ // 배열을 const로 선언
    cout << "** test()" << endl;
    cout << arr[3] << endl; // 상수형 참조
}
 
int main(){
    CintArray arr(5);
    for (int i = 0; i < 5; ++i)
        arr[i] = i*10;
 
    test(arr); 
    return 0;
}