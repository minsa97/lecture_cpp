// main.cpp
#include "MyString.h"
using namespace std;

int main(void){
    CMyString left("Hello"), right(" World"), result;
    result = left + right;
    cout << "** result=   "<< result << endl;
 
    cout << "** old left= "<< left << endl;
    left += CMyString(" C++ world");
    cout << "** new left= "<< left << endl;
 
    return 0;
}