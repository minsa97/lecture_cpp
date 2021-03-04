// 02_binary_literal.cpp
#include <iostream>
using namespace std; 
int main() {
    int a(0); 
    a = 0b1; // assign binary 0000 0001 to the variable 
    a = 0b11; // assign binary 0000 0011 to the variable 
    a = 0b1010; // assign binary 0000 1010 to the variable 
    a = 0b11110000; // assign binary 1111 0000 to the variable 

    cout<<a<<endl; // 10진수로 표시
    cout<<showbase<<hex<<a<<endl; // 16진수로 표시
    return 0; 
}