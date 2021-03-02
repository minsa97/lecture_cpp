// 07_hex_number.cpp

#include <iostream>
#include <iomanip>
#include <bitset>
using namespace std;

int main(){
    int n=17;
    cout<<showbase<<hex<<n<<endl;
    cout<<showbase<<dec<<n<<endl;
    cout<<showbase<<oct<<n<<endl;

    // 2진수 : 7은 자리수를 의미한다.
    cout<<bitset<7>(n)<<endl;
    return 0;
}