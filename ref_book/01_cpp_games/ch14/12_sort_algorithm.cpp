// 12_sort_algorithm.cpp

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

int main(){
	vector <int> u(7), v(7), w(14);

	generate(v.begin(), v.end(), RandRange(1, 7));
	printContainer(v, "v: gen(rand(1-7))= ");

	sort(v.begin(), v.end());
	printContainer(v, "v: sorting()     = ");

	bool b6 = binary_search(v.begin(), v.end(), 6);	// binary_search
	bool b8 = binary_search(v.begin(), v.end(), 8);
	cout << "v: bin_search(6)= " << (b6 ? "true" : "false") << endl;
	cout << "v: bin_search(8)= " << (b8 ? "true" : "false") << endl;

	generate(u.begin(), u.end(), SeqGenerator(3));
	printContainer(u, "\nu: gen(SeqGn(3))= ");
	merge(v.begin(), v.end(), u.begin(), u.end(), w.begin());	// merge
	printContainer(w, "w: merge(v,u)   = ");

	make_heap(v.begin(), v.end());			// make_heap
	printContainer(v, "\nv: make_heap()  = ");
	pop_heap(v.begin(), v.end());			// pop_heap
	v.pop_back();					// v.pop_back()
	printContainer(v, "v: pop_heap()   = ");
	v.push_back(8);					// v.push_back()
	push_heap(v.begin(), v.end());			// push_heap()
	printContainer(v, "v: push_heap()  = ");

	sort_heap(v.begin(), v.end());			// sort_heap()
	printContainer(v, "v: sort_heap()  = ");

    return 0;
}