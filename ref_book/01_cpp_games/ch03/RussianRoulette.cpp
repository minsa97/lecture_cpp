// RussianRoulette.cpp

#include "RussianRoulette.h"
int playRussianRoulette(int nTurns, int nBullets){
	int start = rand() % nTurns;
	cout<<"\n총을 돌렸습니다. "<<start+1<<"번부터 시작합니다.\n";
	while (true) {
		int pos = rand() % 6;
		cout<<"["<<start+1<<"번]\t탄창을 무작위로 돌렸습니다.\n";
		cout<<"\t엔터를 누르면 격발됩니다...";
		getchar();

		if (pos < nBullets)  // 2라는 의미는 0,1이 총알이고, 나머지는 빈 상태이다.
            break;
		cout<<"\t휴~~~ 살았습니다!!!\n";
		start = (start + 1) % nTurns;
	}
	cout<<"\t빵~~~~~~~~~!!!\n";
	return start + 1;
}