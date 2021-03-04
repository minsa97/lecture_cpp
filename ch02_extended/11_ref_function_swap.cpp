// 11_ref_function_swap.cpp
#include <iostream>
using namespace std;
 
// 참조 전달이므로 호출자 변수의 값을 변경할 수 있다.
void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}
 
int main(){
    int a = 10, b = 20;
 
    // 참조 전달이며 두 변수의 값이 교환된다.
    swap(a, b);
 
    // 교환된 결과를 출력한다.
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
 
    return 0;
}