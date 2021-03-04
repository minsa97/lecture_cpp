// 18_range_for.cpp

#include <iostream>
using namespace std;
 
int main(){
    /////////////////////////////////////////////////////////
    // 전형적인 C 스타일 반복
    int aList[5] = { 10, 20, 30, 40, 50 }; 
    
    for(int i = 0; i < 5; ++i){
        cout << aList[i] << ' ';
    }
 
    cout << endl;
 
    /////////////////////////////////////////////////////////
    // 범위 기반 C++11 스타일 반복
    // 각 요소의 값을 n에 복사한다.
    for(auto n : aList){
        cout << n << ' ';
    }
 
    cout << endl;
 
    // n은 각 요소에 대한 참조다. 참조의 경우 n=10 이라는 게 아래에 있으면 배열이 모두 10으로 초기화 된다. 
    for(auto &n : aList){
        cout << n << ' ';
    }
 
    cout << endl;
 
    return 0;
}
