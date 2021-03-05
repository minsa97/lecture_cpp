// 04_static_get_prime.cpp
#include <iostream>
using namespace std;

inline bool isPrimeNumber(int n) {
	for (int i = 2; i<n; i++)
		if (n%i == 0) return false;
	return true;
}
int getNextPrime() {
	static int prime = 1;
	//int prime = 1;
	while (isPrimeNumber(++prime) == false);
	return prime;
}

int main(){
	for (int i = 0; i<10; i++) {
		cout<<getNextPrime()<<"\n";
	}
    return 0;
}