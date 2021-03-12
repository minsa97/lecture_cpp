// 08_ref_function.cpp
#include <iostream>
using namespace std;

int& RefRetFuncOne( int& ref ){
    ref++;
    return ref;
}

/*int& f(int x){
    int y=x+20;
    return y;
}*/
 
int main(){
    int num1 = 1;
    int num2 = RefRetFuncOne( num1 );

    ++num1;
    num2 += 10;

    cout << num1 << endl;
    cout << num2 << endl;

    //////////////////////////
    /*int &d=f(num1);
    cout <<"d="<< d << endl;*/

    return 0;
}