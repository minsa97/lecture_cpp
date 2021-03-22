// 15_ref_sample.cpp

#include <iostream>
using namespace std;
 
class CRefTest{
    // 참조형 멤버는 객체가 생성될 때 반드시 초기화해야 한다.
    int &data;
public:
    // 참조형 멤버는 반드시 생성자 초기화 목록을 이용해 초기화한다.
    CRefTest(int &x) : data(x) { };
    /*CRefTest(int &x){
        data=x;
    }*/
    //CRefTest(int x) : data(x) { };
    int GetData(void) { return data; } 
};
 
int main(){
    int a = 10;
    CRefTest t(a);
 
    cout <<"-- before: " << t.GetData() << endl;
 
    // 참조 원본인 a의 값이 수정됐다.
    a = 20;
    cout <<"-- after : " <<  t.GetData() << endl;
 
    return 0;
}