// 02_findMaxMin.cpp

#include <iostream>
using namespace std;

void findMinMax(int* a, int len, int& min, int& max) {
	min = a[0];
	for (int i = 1; i < len; i++)
		if (min > a[i]) min = a[i];

	max = a[0];
	for (int i = 1; i < len; i++)
		if (max < a[i]) max = a[i];
}

int main(){
    int arr[10] = { 3, 24, 82, 12, 34, 7, 53, 17, 26, 51 };
	int x, y;

	findMinMax(arr, 10, x, y);
	cout<<"최소~최대: "<<x<<"~ "<<y<<'\n';
    return 0;
}