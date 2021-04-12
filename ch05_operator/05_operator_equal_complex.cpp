// 05_operator_equal_complex.cpp

#include <iostream>
using namespace std;
 
class CData{
public:
    CData(int nParam){
        p = new int(nParam);
    }
 
    ~CData() { delete p; }
 
    operator int() { return *p; }
 
    CData& operator=(const CData &rhs){
        if(this == &rhs)
            return *this;
            
        delete p;
        p = new int(*rhs.p);
        return *this;
    }

    CData& operator+=(const CData &rhs){
        int *pnNewData = new int(*p);
        *pnNewData += *rhs.p;
        delete p;
        p = pnNewData;
        return *this;
    }
 
private:
    int *p = nullptr;
};
 
int main(){
    CData a(5), b(10), c(7);
    a += b;
    a += c;
    cout <<"a object: "<< a << endl;

    return 0;
}
