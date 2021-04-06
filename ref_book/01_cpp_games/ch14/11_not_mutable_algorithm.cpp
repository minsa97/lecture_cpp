// 11_not_mutable_algorithm.cpp

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

inline int randRange1to6() { return rand() % 6 + 1; }
inline void print(double val) { cout << val << " "; }

template <typename T>
void printContainer(T& v, string msg = "container") {
	cout << msg << "<";
	for (typename T::iterator it = v.begin(); it != v.end(); ++it)
		cout << *it << " ";
	cout << ">\n";
}

class RandRange {
	int from, to;
public:
	RandRange(int f = 1, int t = 6) :from(f), to(t) {}
	int operator()() { return rand() % (to - from + 1) + from; }
};

class SeqGenerator {
	int val;
public:
	SeqGenerator(int v = 1) { val = v; }
	int operator()() { return val++; }
};

//-------------------------------------------------------

class ValueFinder {
	int val;
public:
	ValueFinder(int v = 1) { val = v; }
	bool operator()(int v) { return val == v; }
};

int main(){
	vector <int> u(10), v(10), w(10), x(3);
	vector<int>::iterator it;

	generate(v.begin(), v.end(), RandRange(1, 7));
	printContainer(v, "v: gen(rand(1-7))= ");
	cout << " count (3)       = " << count(v.begin(), v.end(), 3) << endl;
	cout << " count (7)       = " << count(v.begin(), v.end(), 7) << endl;
	cout << " min_element ()  = " << *(min_element(v.begin(), v.end())) << endl;
	cout << " max_element ()  = " << *(max_element(v.begin(), v.end())) << endl;

	it = find(v.begin(), v.end(), 3);
	if (it != v.end())
		cout << " find(3) index   = " << it - v.begin() << endl;

	for (it = v.begin();; it++) {
		it = find_if(it, v.end(), ValueFinder(6));
		if (it == v.end()) break;
		cout << " find_if(6) index= " << it - v.begin() << endl;
	}

	copy_n(v.begin() + 3, 3, x.begin());
	printContainer(x, "\nx: search seq    = ");
	it = search(v.begin(), v.end(), x.begin(), x.end());
	if (it != v.end())
		cout << " search seq pos  = " << it - v.begin() << endl;

    return 0;
}
