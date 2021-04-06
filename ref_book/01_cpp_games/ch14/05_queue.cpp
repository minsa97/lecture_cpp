// 05_queue.cpp

#include <iostream>
#include <queue>
using namespace std;

int main(){
	queue<int> que;
	int count;
	cout << "피보나치 수의 개수를 입력하세요: ";
	cin >> count;

	cout << "피보나치 수열 = ";
	que.push(0);
	que.push(1);

	for (int i = 0; i < count; i++) {
		int x = que.front();
		que.pop();
		cout << x << " ";
		que.push(x + que.front());
	}
	cout << endl;

    return 0;
}