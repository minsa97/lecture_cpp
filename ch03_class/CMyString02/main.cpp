// main.cpp
#include "MyString.h"

void TestFunc(const CMyString &c)
{
    cout << c.GetString() << endl;
}
 
int main(){
    CMyString strData;
    strData.SetString("Hello");
    TestFunc(strData);
 
    return 0;
}