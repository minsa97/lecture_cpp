// 18_this_test.cpp
#include <iostream>
using namespace std;
 
class CMyData{
    int x;
public:
    CMyData(int n) : x(n) { };
    
    void PrintData(){
        cout << "way#1: "<< x << endl; // x 값을 출력한다.
        cout << "way#2: "<< CMyData::x << endl;// CMyData 클래스의 멤버인 x 값을 출력한다.
        cout << "way#3: "<< this->x << endl;// 메서드를 호출한 인스턴스의 x 멤버 값을 출력한다.
        cout << "way#4: "<< this->CMyData::x << endl<<endl;// 메서드를 호출한 인스턴스의 CMyData 클래스 멤버 x 출력한다.
    } 
};
 
int main(){
    CMyData a(5), b(10);
    a.PrintData();
    b.PrintData();
 
    return 0;
}