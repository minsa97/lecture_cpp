// 30_string_7.cpp

#include <iostream>
#include <string>

using namespace std;

int main(){
    // string을 정수로, 정수를 string으로 변환한다.
    string a;

    int i=10;
    a=to_string(i);
    cout<<a<<endl;


    string b="123";
    int j=stoi(b);
    cout<<j<<endl;



    string c="mct com";
    printf("%s\n", c.c_str());


    char x[100]="korea is 1";
    string str(x);
    cout<<str<<endl;

    return 0;
}