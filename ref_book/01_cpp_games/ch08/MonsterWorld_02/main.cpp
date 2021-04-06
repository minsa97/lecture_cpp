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
	
	game.add(new Monster("����", "��", rand() % w, rand() % h));
	game.add(new Monster("������", "��", rand() % w, rand() % h));
	game.add(new Monster("���״�", "��", rand() % w, rand() % h));
	game.add(new Monster("��Ʈ", "��", rand() % w, rand() % h));
	game.play(500, 10);
	printf("------���� ����-------------------\n");
	
	return 0;
}
