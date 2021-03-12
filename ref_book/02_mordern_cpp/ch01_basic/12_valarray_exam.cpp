// 12_valarray_exam.cpp
#include <iostream>
#include <valarray>
using namespace std;

int main(){
    valarray<float> v= {1, 2, 3}, w= {7, 8, 9};
    valarray<float> s= v + 2.0f * w;

    v= sin(s);
    for (float x: v)
	    cout << x << ' ';
    
    cout << '\n';
    return 0;
}