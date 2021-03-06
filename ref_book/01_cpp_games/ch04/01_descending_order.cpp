// 01_descending_order.cpp

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void printArray(const int a[], int len, string msg = "Array") {
	cout<<msg;
	for (int i = 0; i < len; i++)
		cout<<setw(3)<<a[i];
	cout<<"\n";
}

void addDescending(int a[], int len, int val) { // 삽입정렬 사용
	if (val > a[len - 1]) {
		a[len - 1] = val;
		for (int i = len - 1; i>0; i--) {
			if (val < a[i - 1]) return;
			a[i] = a[i - 1];
			a[i - 1] = val;
		}
	}
}
int main(){
    srand(time(0));

	int score[5] = { 0,0,0,0,0 };
	for (int i = 0; i<8; i++) {
		int x = rand() % 100;
		addDescending(score, 5, x);
		cout<<"["<<setw(2)<<x<<"]  ";
		printArray(score, 5, "순위");
	}
    return 0;
}