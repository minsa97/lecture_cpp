// 22_fucntion_corruption.cpp
#include <iostream>
using namespace std;
 
void TestFunc(int n){
    cout << n << endl;
}
 
int main(){
    TestFunc(10);
    TestFunc(5.5);
 
    return 0;
}