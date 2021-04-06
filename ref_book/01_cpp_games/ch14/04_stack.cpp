// 04_stack.cpp

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
	stack<char> st;
	string line;
	cout << "문장을 입력하세요 : ";
	getline(cin, line);

	for (int i = 0; i < line.length(); i++)
		st.push(line[i]);

	cout << "입력 = " << line << endl;
	cout << "출력 = ";

	while (!st.empty()) {
		cout << st.top();
		st.pop();
	}
	cout << endl;

    return 0;
}