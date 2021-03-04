// 25_template_func.cpp

#include <iostream>
using namespace std;

template <typename T>
T f(T a){
    //cout << " - 매개변수 a: " << a << endl; 
    return a;
}
 
int main(){
    cout << "int    \t" << f(3)   << endl;
    cout << "double \t" << f(3.3) << endl;
    cout << "char   \t" << f('A') << endl;
    cout << "char*  \t" << f("TestString") << endl;
 
    return 0;
}
