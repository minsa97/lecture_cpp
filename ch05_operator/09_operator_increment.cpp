// 09_operator_increment.cpp

#include <iostream>
using namespace std;
 
class Data{
public:
    Data(int k) : x(k) {}
 
    // 형변환
    operator int() { return x; }
 
    // 전위 증가 연산자
    int operator++() {
        cout << "** operator++()" << endl;
        return ++x;
    }
 
    // 후위 증가 연산자
    int operator++(int) {
        cout << "** operator++(int)" << endl;
        int temp = x;
        x++; 
        return temp;
    }
 
private:
    int x = 0;
};
 
int main(){
    Data a(10);
    cout <<"init: a="<< a << endl;
 
    // 전위 증가 연산자를 호출한다.
    ++a;
    cout <<"pre: a="<< a << endl;
 
    // 후위 증가 연산자를 호출한다.
    int b=a++;    
    cout <<"after: a="<< a << endl;
    cout <<"after: b="<< b << endl;
 
    return 0;
}
