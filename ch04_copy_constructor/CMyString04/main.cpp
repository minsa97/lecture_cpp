// main.cpp
#include "MyString.h"

void test(const CMyString &param){
	cout << "-- test() : "<< param << endl;
}

int main(int argc, char* argv[]){
	CMyString strData("Hello");

	::test(strData);
	::test(CMyString("World"));
	
	cout<<strData<<endl;

	return 0;
}