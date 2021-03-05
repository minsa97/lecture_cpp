// 06_SGGame.cpp

#include "SpeedGugu.h"

int main(){
	srand((unsigned)time(NULL));

	int nPlay = 10;
	cout<<"[스피드 구구단 게임]\n\n";
	cout<<" 당신의 구구단 실력을 테스트하세요.!!!\n";
	cout<<nPlay<<"번 테스트 하겠습니다.\n";
	cout<<" 크게 심호흡을 하시고...\n 준비되면 엔터를 누르세요...";
	getchar();
	system("cls");

	double score = playSpeedGugu(nPlay);
	cout<<"\n점수 = "<<setw(4)<<fixed<<setprecision(1)<<score<<"점(총 "<<tElapsed<<"초)\n";
}