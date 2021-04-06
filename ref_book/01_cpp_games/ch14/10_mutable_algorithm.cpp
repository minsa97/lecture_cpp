// 10_mutable_algorithm.cpp

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

inline int square(int n) { return n * n; }
inline bool isOdd(int val) { return (val % 2) == 1; }

int main(){
	vector <int> u(8), v(8), w(8), y(3);
	list<int> a(8);

	generate(u.begin(), u.end(), RandRange(1, 9));
	printContainer(u, "u: gen(RandRange(1~9)) = ");

	copy(u.begin(), u.end(), v.begin());		// copy
	printContainer(v, "v: copy() from u       = ");

	reverse(v.begin(), v.end());			// reverse
	printContainer(v, "v: reverse()           = ");

	random_shuffle(v.begin(), v.end());		// random_shuffle
	printContainer(v, "v: random_shuffle()    = ");

	rotate(v.begin(), v.begin() + 2, v.end());	// rotate
	printContainer(v, "v: rotate(2)           = ");

	transform(v.begin(), v.end(), w.begin(), square);	// transform
	printContainer(w, "w: transform(v*v)      = ");

	partition(w.begin(), w.end(), isOdd);		// partition
	printContainer(w, "w: partition(isOdd)    = ");

	generate(a.begin(), a.end(), SeqGenerator(1));
	printContainer(a, "\na: gen(SeqGenerator(1))= ");
	auto it = remove(a.begin(), a.end(), 3);		// remove
	printContainer(a, "a: remove(3)           = ");
	a.erase(it);					// erase
	printContainer(a, "a: erase(remove(3))    = ");
	a.erase(remove_if(a.begin(), a.end(), isOdd), a.end());
	printContainer(a, "a: erase(rem(isOdd())  = ");

	generate(y.begin(), y.end(), SeqGenerator(1));	// : 1, 2, 3
	printContainer(y, "\ny: gen(SeqGenerator(1))= ");
	while (next_permutation(y.begin(), y.end())) {	// next_permutation
		printContainer(y, " permutations of y.... = ");
	}

    return 0;
}