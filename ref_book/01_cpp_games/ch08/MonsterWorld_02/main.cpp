// main.cpp
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "MonsterWorld.h"

using namespace std;

int main(int argc, char** argv) {
	srand((unsigned int)time(0));
	int w = 16, h = 8;

	MonsterWorld game(w, h);
	
	game.add(new Monster("몬스터", "※", rand() % w, rand() % h));
	game.add(new Monster("도깨비", "◎", rand() % w, rand() % h));
	game.add(new Monster("별그대", "★", rand() % w, rand() % h));
	game.add(new Monster("고스트", "♥", rand() % w, rand() % h));
	game.play(500, 10);
	printf("------게임 종료-------------------\n");
	
	return 0;
}
