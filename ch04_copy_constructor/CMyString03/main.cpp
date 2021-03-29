// main.cpp
#include "MyString.h"

int main(){
    CMyString strData,strTest;
    strData.SetString("Hello");
    strTest.SetString("World");
    
    //복사생성
    CMyString strNew(strData);
    cout<<strNew.GetString()<<endl;

    //단순 대입연산자
    strNew=strTest;
    cout<<strNew.GetString()<<endl;
 
    return 0;
}