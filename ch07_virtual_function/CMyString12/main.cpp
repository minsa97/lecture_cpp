// main.cpp
#include <iostream>
#include "MyStringEx.h"	 // CMyStringEx 클래스 헤더

using namespace std;

int main(){
	CMyStringEx str;
	str.SetString("멍멍이아들");
	cout << str << endl;

	return 0;
}