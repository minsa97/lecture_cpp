// 02_operator_equal.cpp

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
