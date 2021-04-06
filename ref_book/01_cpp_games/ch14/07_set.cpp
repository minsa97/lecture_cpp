// 07_set.cpp

#include <iostream>
#include <string>
#include <set>
using namespace std;

template <typename T>
void printContainer(T& v, string msg = "container") {
	cout << msg << "<";
	for (typename T::iterator it = v.begin(); it != v.end(); ++it)
		cout << *it << " ";
	cout << ">\n";
}

int main(){
	set<int> simple;
	multiset<int> multiple;

	for (int i = 10; i < 15; i++)
		simple.insert(i);

	multiple.insert(simple.begin(), simple.end());

	for (int i = 13; i < 18; i++)
		multiple.insert(i);

	printContainer(simple, "Simple   Set = ");
	printContainer(multiple, "Multiple Set = ");

	cout << "simple.count(14)   = " << simple.count(14) << endl;
	cout << "multiple.count(14) = " << multiple.count(14) << endl;

    return 0;
}