// 01_function_template.cpp

#include <iostream>
#include <cstring>
using namespace std;

template < typename T >
T findMaxValue(T a[], int len) {
	T maxVal = a[0];
	for (int i = 1; i<len; i++)
		if (maxVal < a[i]) maxVal = a[i];
	return maxVal;
}

int main() {
	int iArr[5] = { 1, 4, 2, 5, 3 };
	double dArr[5] = { 5.0, 8.0, 7.0, 9.0, 6.0 };
	char cArr[] = "game over ! {09}";

	int iMax = findMaxValue(iArr, 5);
	double dMax = findMaxValue(dArr, 5);
	char cMax = findMaxValue(cArr, strlen(cArr));

	cout << "iMax = " << iMax << endl;
	cout << "dMax = " << dMax << endl;
	cout << "cMax = " << cMax << endl;

    return 0;
}