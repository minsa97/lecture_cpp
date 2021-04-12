// 03_operator_equal2.cpp

#include <iostream>
using namespace std;
 
class CData{
public:
    CData(int nParam){
        p = new int(nParam);
    }
 
    ~CData() { delete p; }
 
    operator int() { return *p; }
 
    // 단순 대입 연산자 다중 정의
    void operator=(const CData &rhs){
        // r-value 가 자신이면 아무것도 수행하지 않는다.
        if(this == &rhs)
            return;
            
        delete p;
        p = new int(*rhs.p);
    }
 
private:
    int *p = nullptr;
};
 
int main(){
    CData a(0), b(5);
    a = b;
    cout << a << endl;
 
    return 0;
}
