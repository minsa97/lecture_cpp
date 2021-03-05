// 02_inline_random.cpp
#include <iostream>
using namespace std;

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

inline int randCoin()	{ return rand() % 2; } // 앞뒤
inline int randDice()	{ return rand() % 6 + 1; } // 주사위
inline char randLChar()	{ return rand() % 26 + 'a'; } //소문자
inline char randUChar()	{ return rand() % 26 + 'A'; } //대문자
inline char randNum()	{ return rand() % 10 + '0'; } //숫자

int main(){
	srand((unsigned)time(NULL));
	cout<<"coin\tdice\tLChar\tUChar\tNum\n";
	for (int i = 0; i < 6; i++) {
		cout<<(randCoin()==0 ? "head" : "tail")<<"\t";
		cout<<setw(2)<<randDice()<<"\t\t";
		cout<<randLChar()<<"\t\t";
		cout<<randUChar()<<"\t\t";
		cout<<randNum()<<'\n';
	}

    return 0;
}