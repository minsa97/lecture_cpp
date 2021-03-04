// 12_rvalue_ref.cpp
#include <iostream>
using namespace std;
 
int main(){
    int val = 3;
    int &l_ref = val;   // OK.  val은 lvalue.
	int &&r_ref = 3;    // OK.  3은 rvalue
     
    return 0;
}