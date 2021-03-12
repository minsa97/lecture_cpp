// 17_constructor_multi2.cpp

#include <iostream>
using namespace std;
 
class CMyPoint{
private:
    int x = 0;
    int y = 0;
public:
    CMyPoint(int a){
        cout << "CMyPoint(int)" << endl;

        if(a > 100)
            x = 100;
 
        x = a;
    }
 
    CMyPoint(int a, int b): CMyPoint(a){
        cout << "CMyPoint(int, int)" << endl;
 
        // y 값이 200이 넘는지 검사하고 넘으면 200으로 맞춘다.
        if(b > 200)
            b = 200;
 
        y = b;
    }
 
    void print()    {
        cout << "X:" << x << endl;
        cout << "Y:" << y << endl;
        cout <<"------------------"<<endl<<endl;
    }
};
 
int main(){
    // 매개변수가 하나인 생성자만 호출한다.
    CMyPoint ptBegin(110);
    ptBegin.print();
 
    // 이번에는 두 생성자 모두 호출된다.
    CMyPoint ptEnd(50, 250);
    ptEnd.print();
 
    return 0;
}
