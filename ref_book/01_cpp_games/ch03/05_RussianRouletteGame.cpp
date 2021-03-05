// 05_RussianRouletteGame.cpp

#include "RussianRoulette.h"
int main(){
	int nTurn, nBullets;
	srand((unsigned)time(NULL));

	cout<<"게임 인원 (예:2) ==> ";
	cin>>nTurn;
	cout<<"총알 개수 (6미만) ==> ";
	cin>>nBullets;
	getchar();

	int bang = playRussianRoulette(nTurn, nBullets);
	cout<<"\n -----> "<<bang<<"번 참가자가 총에 맞았습니다.\n";

    return 0;
}