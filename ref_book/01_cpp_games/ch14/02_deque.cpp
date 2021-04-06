// 02_deque.cpp

#include <iostream>
#include <deque>
using namespace std;

int main(){
	deque<int> dq;
	for (int i = 0; i < 10; i++) {
		int val = rand() % 100 + 1;
		if (val % 2 == 0) dq.push_back(val);
		else dq.push_front(val);
	}
	cout << "deque(인덱스): ";
	for (int i = 0; i < dq.size(); i++)
		cout << dq[i] << " ";

	cout << endl << "deque(반복자): ";
	for (auto curr = dq.begin(); curr != dq.end(); ++curr)
		cout << *curr << " ";
	cout << endl;

    return 0;
}