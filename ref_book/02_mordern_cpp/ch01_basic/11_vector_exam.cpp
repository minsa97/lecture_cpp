// 11_vector_exam.cpp

#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

// 배열의 크기를 따로 인자로 안 넘겨도 된다.
void vector_add(const vector<float>& v1, const vector<float>& v2, vector<float>& s){
    assert(v1.size() == v2.size());
    assert(v1.size() == s.size());
    for (unsigned i= 0; i < v1.size(); ++i)
	    s[i]= v1[i] + v2[i];
}

vector<float> add(const vector<float>& v1, const vector<float>& v2){
    assert(v1.size() == v2.size());
    vector<float> s(v1.size());
    for (unsigned i= 0; i < v1.size(); ++i)
	    s[i]= v1[i] + v2[i];
    return s;
}


int main (){
    // vector<float> v(3), w(3);
    // v[0]= 1; v[1]= 2; v[2]= 3;
    // w[0]= 7; w[1]= 8; w[2]= 9;

    // vector<float> v= {1, 2, 3}, w= {7, 8, 9};
    vector<float> v= {1, 2, 3}, w= {7, 8, 9}, s= add(v, w);

    return 0 ;
}
