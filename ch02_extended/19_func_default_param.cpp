// 19_func_default_param.cpp

#include <iostream>
using namespace std;
 
// nParam 매개변수의 디폴트 값은 10이다.
int f(int a = 10){
    return a;
}
 
int main(){
    // 호출자가 실인수를 기술하지 않았으므로 디폴트 값을 적용한다.
    cout << f() << endl;
 
    // 호출자가 실인수를 ?정했으므로 디폴트 값을 무시한다.
    cout << f(20) << endl;
 
    return 0;
}