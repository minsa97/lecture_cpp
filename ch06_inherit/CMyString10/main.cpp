// main.cpp
#include <iostream>
#include "MyStringEx.h"	 // CMyStringEx 클래스 헤더

using namespace std;

int main(){
	CMyStringEx str;
 
    // 문자열이 필터링되어 대체되는 경우
    str.SetString("멍멍이아들");
    cout << str << endl;
 
    // 필터링되지 않는 경우
    str.SetString("Hello");
    cout << str << endl;
 
    return 0;
}