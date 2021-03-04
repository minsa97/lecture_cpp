// 20_func_default_param.cpp

#include <iostream>
using namespace std;
 
int f(int a, int b = 2){
    return a * b;
}

int main(){
    cout << f(10) << endl;
    cout << f(10, 5) << endl;
 
    return 0;
}