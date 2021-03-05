// 03_updown_time.cpp
#include <iostream>
using namespace std;

#include "myFunctions.h"	// 프로그램 3.7 포함
#include <ctime>

int main(){
	clock_t t1 = clock();
	int score = playUpAndDown(43, 0, 99); // 0부터 99까지 43을 맞추는데 획득한 점수를 리턴
	clock_t t2 = clock();
	double  duration = (double)(t2 - t1) / CLOCKS_PER_SEC;

	cout<<" 게임 점수: "<<score<<"점\n";
	cout<<" 걸린 시간: "<<duration<<"초\n";

    return 0;
}