// 06_setf.cpp

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double pi=3.1415926535;
    cout<<pi<<endl;

    cout<<fixed;
    cout<<setw(11);
    cout<<setprecision(7);
    cout<<pi<<endl;

    cout<<fixed<<setw(11)<<setprecision(7)<<pi<<endl;
    return 0;
}