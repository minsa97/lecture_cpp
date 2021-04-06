// 06_priority_queue.cpp

#include <iostream>
#include <queue>
using namespace std;

int main(){
	priority_queue<double> pque;

	double val;
	cout << "우선순위 큐 입력 순서 = ";

	for (int i = 0; i < 10; i++) {
		val = rand() % 1000 * 0.1;
		cout << val << " ";
		pque.push(val);
	}

	cout << endl;
	cout << "우선순위 큐 출력 순서 = ";

	while (!pque.empty()) {
		cout << pque.top() << " ";
		pque.pop();
	}
	cout << endl;

    return 0;
}