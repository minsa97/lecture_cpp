// 03_fn_temp_multi_types.cpp

#include <iostream>
using namespace std;

template < typename T1, typename T2 >
void copyArray(T1 a[], T2 b[], int len) {
	for (int i = 0; i < len; i++)
		b[i] = (T2)a[i];		// b[i] = a[i];
}

template < typename T >
void printArray(T a[], int len) {
	cout << "Array: ";
	for (int i = 0; i < len; i++)
		cout << a[i] << " ";
	cout << endl;
}

int main() {
	int iArr[5] = { 1, 4, 2, 5, 3 };
	float fArr[5];
	double dArr[5] = { 5.0, 8.0, 7.0, 9.0, 6.0 };

	copyArray(iArr, fArr, 5);
	printArray(iArr, 5);
	printArray(fArr, 5);

	copyArray(dArr, iArr, 5);
	printArray(iArr, 5);

    return 0;
}