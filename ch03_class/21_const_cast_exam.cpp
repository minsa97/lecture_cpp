// 21_const_cast_exam.cpp

#include <iostream>
using namespace std;
 
void TestFunc(const int &n){
    // 상수형 참조였으나 일반 참조로 형변환했다.
    int &m = const_cast<int &> (n);
 
    // 따라서 l-value가 될 수 있다.
    m = 20;
}
 
int main(){
    int a = 10;
 
    // 상수형 참조로 전달하지만 값이 변경된다.
    TestFunc(a);
 
    // 변경된 값을 출력한다.
    cout << a << endl;
 
    return 0;
}