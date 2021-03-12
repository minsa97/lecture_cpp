// 07_recursive.cpp
#include <iostream>
using namespace std;

int factorial(int n){
	if (n == 1) return 1;					// 종료 조건 검사 코드
	else return (n * factorial(n - 1));		// 재귀 호출 코드
}

int factorial_iter(int n){
	int result = 1;
	for (int k = n; k>0; k--)
		result = result * k;
	return result;
}

int fibonacci(int n){
	if (n == 0) return 0;
	if (n == 1) return 1;
	return (fibonacci(n - 1) + fibonacci(n - 2));
}

int fibonacci_iter(int n){
	if (n < 2) return n;
	else {
		int tmp, current = 1, last = 0;
		for (int i = 2; i <= n; i++) {
			tmp = current;
			current += last;
			last = tmp;
		}
		return current;
	}
}

int main(){
	cout<<"5! = "<< factorial(5)<<'\n';
	cout<<"5! = "<< factorial_iter(5)<<'\n';
	cout<<"fibo(5) = "<< fibonacci(5)<<'\n';
	cout<<"fibo(5) = "<< fibonacci_iter(5)<<'\n';

    return 0;
}