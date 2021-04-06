// 09_Pair_class_temp.cpp

#include <iostream>
#include <string>
using namespace std;

template <typename T1, typename T2>
class Pair {
	T1	data1;
	T2	data2;
public:
	Pair() { }
	void set(T1 d1, T2 d2) { data1 = d1; data2 = d2; }
	friend ostream& operator << (ostream& os, const Pair& p) {
		os << "(" << p.data1 << " : " << p.data2 << ")";
		return os;
	}
};

int main() {
	Pair<int, double> i2d[3];
	i2d[0].set(10, 3.14159);
	i2d[1].set(25, 2.71828);
	i2d[2].set(14, 1.41421);
	for (int i = 0; i < 3; i++)
		cout << i2d[i] << endl;

	Pair<string, double> map[3];
	map[0].set("Pi, Archimedes' constant", 3.14159);
	map[1].set("Euler's number", 2.71828);
	map[2].set("square root of 2", 1.41421);
	for (int i = 0; i < 3; i++)
		cout << map[i] << endl;

    return 0;
}