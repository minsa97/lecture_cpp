// 09_MineSweeperGame_devcpp.cpp
#include "MineSweeper.h"
int main(){
	int total;
	printf(" <Mine Sweeper>\n");
	printf(" �ż��� �� ������ ���� �Է� : ");
	scanf("%d", &total);
	playMineSweeper(total);
	
	return 0;
}
