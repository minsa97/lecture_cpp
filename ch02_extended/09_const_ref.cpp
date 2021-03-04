// 09_const_ref.cpp
#include <iostream>
using namespace std;
int Adder( const int &num1, const int &num2);

int main(){
    // 제대로된 참조
    const int num = 20;
    const int& ref = num;

    // 임시변수 참조
    const int& a = 10;

    // 함수에서 임시변수 전달
    cout << Adder( 1, 2 ) << endl;

    return 0;
}

// 임시변수를 const 참조로 받을수 있다.
int Adder( const int &num1, const int &num2 ){
    return num1 + num2;
}