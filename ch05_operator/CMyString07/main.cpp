// main.cpp
#include "MyString.h"
using namespace std;

void test(const CMyString &temp){
    cout << temp[0] << endl;
    cout << temp[temp.GetLength() - 1] << endl;
}

int main(void){
    CMyString a("Hello, World");
    cout << a << endl;
    test(a);
 
    return 0;
}