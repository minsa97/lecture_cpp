// main.cpp
#include <iostream>
#include "MyStringEx.h"	 // CMyStringEx 클래스 헤더

using namespace std;

int main(){
	CMyStringEx strLeft("Hello");
    CMyStringEx strRight(", World");
    cout << strLeft+strRight << endl;
 
    return 0;
}