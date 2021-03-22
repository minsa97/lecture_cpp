// 24_method_delete.cpp

#include <iostream>
using namespace std;

class CMyData{
public:
    CMyData() : x(0) { };
 
    int GetData(void) { return x; }
    void SetData(int n) { x = n; }
 
    // 매개변수가 double 자료형인 경우로 다중 정의했다.
    void SetData(double d) = delete;
 
private:
    int x;
};

int main(){
    CMyData a;
 
    // CMyData::SetData(int) 메서드가 호출된다.
    a.SetData(10);
    cout << a.GetData() << endl;
 
    CMyData b;
 
    // CMyData::SetData(double) 메서드가 호출된다.
    b.SetData(5.5);
    cout << b.GetData() << endl;
 
    return 0;
}