// main.cpp
#include <iostream>
#include "MyStringEx.h"	 // CMyStringEx 클래스 헤더

using namespace std;

int main(){
	CMyStringEx strTest;
	strTest.SetString("I am a boy.");
	cout << strTest << endl;

	int nIndex = strTest.Find("am");
	cout << "Index: " << nIndex << endl;

	return 0;
}