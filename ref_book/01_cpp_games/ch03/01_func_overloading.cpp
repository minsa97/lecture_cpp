// 01_func_overloading.cpp
#include <iostream>
using namespace std;

int add(int a, int b) {
	return a + b;
}

float add(float a, float b) {
	return a + b;
}

double add(double a, double b) {
	return a + b;
}

int main() {
	int r1 = add(1, 2);
	float r2 = add(1.0f, 2.0f);
	double r3 = add(1.0, 2.0);

    cout<<"r1= "<<r1<<"\n";
    cout<<"r2= "<<r2<<"\n";
    cout<<"r3= "<<r3<<"\n";

    return 0;
}