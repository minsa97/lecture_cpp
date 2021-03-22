// SpeedGuguClass.cpp

#include "SpeedGuguGame.h"
int main(){
	srand((unsigned)time(NULL));

	int nPlay = 10;
	printf("[Speed Gugudan Game]\n\n");
	printf(" Test your gugudan ability.!!!\n");
	printf(" %d problem will be shown\n", nPlay);
	printf(" click Enter key...");
	getchar();
	system("cls");

	SpeedGuguGame	game;
	double score = game.play(nPlay);
	printf("\nscore = %4.1f (time: %4.1f sec)\n", score, game.tElapsed);

    return 0;
}
