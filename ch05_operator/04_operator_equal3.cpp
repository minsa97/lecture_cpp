// 04_operator_equal3.cpp

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
    CData& operator=(const CData &rhs){
        // r-value 가 자신이면 아무것도 수행하지 않는다.
        if(this == &rhs)
            return *this;
            
        delete p;
        p = new int(*rhs.p);

        return *this;
    }
 
private:
    int *p = nullptr;
};
 
int main(){
    CData a(5), b(10), c(7);
    c = a = b;
    cout <<"a object: "<< a << endl;
    cout <<"c object: "<< c << endl;

    return 0;
}
