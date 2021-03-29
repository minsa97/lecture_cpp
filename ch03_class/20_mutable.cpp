// 20_mutable.cpp
#include <iostream>
using namespace std;
 
class CTest{
public:
    CTest(int n) : x(n) { };
    ~CTest() { }
 
    // 상수형 메서드로 선언 및 정의했다.
    int GetData() const {
        // 상수형 메서드라도 mutable 멤버 변수에는 값을 쓸 수 있다.
        x = 20;
        return x;
    }
 
    void SetData(int n) { x = n; }
 
private:
    mutable int x = 0;
};
 
int main(){
    CTest a(10);
    cout << a.GetData() << endl;
 
    return 0;
}