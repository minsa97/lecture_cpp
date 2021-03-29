// main.cpp
#include "MyString.h"
using namespace std;

CMyString test(void){
    CMyString strTest("hello, monday");
    cout <<"test()함수: "<< strTest << endl;
 
    return strTest;
}
 
int main(void){
    cout<<"이름 없는 임시 객체가 만들어진다.\n";
    CMyString a("test");
	cout<<a<<endl;
    
	cout<<"\nmove()를 이용한, 이동생성자 호출\n";
	CMyString x(move(a));
	cout<<x<<endl;

	cout<<"\n함수를 호출해서 이동대입 연산자 사용됨을 확인\n";
    x=test();
    cout<<x<<endl;
 
    return 0;
}