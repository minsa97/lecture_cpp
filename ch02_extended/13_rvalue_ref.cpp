// 13_rvalue_ref.cpp
#include <iostream>
using namespace std;
 
int main(){
    // rvalue reference 선언.
    int &&r_ref = 3;    
    
    // 표현식이 끝나더라도 rvalue는 r_ref에 참조되어,
    // rvalue의 생명주기가 연장된다.
    cout << r_ref * r_ref << endl;
    
    
    // r_ref는 변수의 이름이므로 lvalue이다.
    // lvalue는 주소를 얻을 수 있다.
    cout << &r_ref << endl; 
     
    return 0;
}