// 09_generate_rand.cpp

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

int main(){
	vector<int> u(6), v(6);
	list<int> a(6), b(6);

	generate(u.begin(), u.end(), rand);
	generate(v.begin(), v.end(), RandRange(10, 16));
	printContainer(u, "vect: generate(rand)            = ");
	printContainer(v, "vect: generate(RandRange(10,16))= ");
	fill_n(v.begin() + 2, 3, 11);
	printContainer(v, "vect: fill_n( begin()+2, 3, 11 )= ");

	generate(a.begin(), a.end(), randRange1to6);
	generate(b.begin(), b.end(), SeqGenerator(1));
	printContainer(a, "list: generate(randRange1to6)   = ");
	cout << "list: for_each(generate(SeqGen))= <";
	for_each(b.begin(), b.end(), print);
	cout << ">" << endl;

    return 0;
}