// 16_constructor_multi.cpp

#include <iostream>
using namespace std;
 
class CMyData{
    int data;
public:
    CMyData(int x) : data(x) { };
    CMyData(int x, int y) : data(x + y) { };
    int getData(void) { return data; }
};
 
int main(){
    int x(1), y(2);
    cout<<"x="<<x<<" , y="<<y<<endl;
    
    CMyData a(10);
    CMyData b(3, 4);
 
    cout <<"a객체: "<< a.getData() << endl;
    cout <<"b객체: "<< b.getData() << endl;
 
    return 0;
}