// main.cpp
#include "MyString.h"
using namespace std;

int main(void){
    CMyString a("Test"), b("String");
 
    if (a == b)
        cout << "Same" << endl; 
    else
        cout << "Different" << endl;
 
    a = CMyString("String");
 
    if (a != b)
        cout << "Different" << endl; 
    else
        cout << "Same" << endl;
 
    return 0;
}