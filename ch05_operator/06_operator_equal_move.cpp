// 06_operator_equal_move.cpp

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
        cout << "** operator=" << endl;
        if(this == &rhs)
            return *this;
            
        delete p;
        p = new int(*rhs.p);
        return *this;
    }
    
    CData& operator=(CData &&rhs){ // 이동 대입 연산자 다중 정의
        cout << "** operator= (Move)" << endl;
        p = rhs.p;
        rhs.p = NULL; 
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
    a = b+c;    
    cout <<"a object: "<< a << endl<< endl;

    a = b;
    cout <<"a object: "<< a << endl;

    return 0;
}
