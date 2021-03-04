// 33_실습1.cpp

#include <iostream>
#include <iomanip>
using namespace std;
 
int main(void){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++) cout<<setw(4)<<10*(i-1)+j;
        cout<<endl;
    }
    return 0;
}