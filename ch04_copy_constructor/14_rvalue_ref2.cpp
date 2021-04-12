// 14_rvalue_ref2.cpp

#include <iostream>
using namespace std;

//void test1(const int &rParam){
void test1(int &rParam){
	cout << "test(int &)" << endl;
}

void test(int &&rParam){
	cout << "test(int &&)" << endl;
}

int main(){
	// 3 + 4 연산 결과는 r-value이다. 절대로 l-value가 될 수 없다.
    //test1(3+4);
	test(3+4);

	return 0;
}
