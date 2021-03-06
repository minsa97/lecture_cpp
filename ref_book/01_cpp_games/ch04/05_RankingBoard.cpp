// 05_RankingBoard.cpp

#include "Ranking.h"
#include <stdlib.h>
#include <time.h>

int main(){
	srand((unsigned int)time(NULL));
    char fname[100]="ranking.txt";
	loadRanking(fname);
	printRanking();

	for (int i = 0; i < 5; i++)
		addRanking(rand() % 500, rand() % 1000 * 0.1);
	storeRanking(fname);

    return 0;
}