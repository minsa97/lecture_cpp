// 06_ref_var.cpp
#include <iostream>
using namespace std;
int main(){
    int num1 = 10;
    int &num2 = num1;

    num2 = 20;

    cout << num1 << endl;
    cout << num2 << endl;

    cout << &num1 << endl;
    cout << &num2 << endl;
    
    return 0;
}