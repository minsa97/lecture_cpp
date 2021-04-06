// MonsterWorld.h
#pragma once
#include "Canvas.h"
#include "Monster.h"
#include "VariousMonsters.h"
#include "Human.h"
//#include "Matrix.h"
#include <windows.h>
#define DIM  40
//#define MAXMONS 8

#include <algorithm>		// STL�� �˰��� ���
inline bool compare(Monster* first, Monster* second) {
	return first->nItem > second->nItem;
}

class MonsterWorld {
	//Matrix world;
	//Vector < Vector<int> > world;
	vector < vector<int> > world;
	
	//int xMax, yMax, nMon, nMove;
	int xMax, yMax, nMove;
	
	//Monster* pMon[MAXMONS];
	//Vector <Monster*> pMon;
	vector <Monster*> pMon;
	
	Canvas	canvas;

	//int& Map(int x, int y) { return world.elem(x, y); }
	int& Map(int x, int y) { return world[y][x]; }
	
	bool isDone() { return countItems() == 0; }
	int countItems() {
		int nItems = 0;
		for (int y = 0; y < yMax; y++){
			//for (int x = 0; x < xMax; x++)
			//	if (Map(x, y) > 0) nItems++;
			nItems += count(world[y].begin(), world[y].end(), 1);				
		}
		return nItems;
	}
	void print() {
		canvas.clear();
		for (int y = 0; y < yMax; y++)
			for (int x = 0; x < xMax; x++)
				if (Map(x, y) > 0) canvas.draw(x, y, "��");
		for (int i = 0; i < pMon.size(); i++)
			pMon[i]->draw(canvas);
		//canvas.print("[ Monster World (���ο� ������ ����) ]");
		//canvas.print("[ Monster World (���ͷ� ���� ����) ]");
		canvas.print("[ Monster World (���� STL ����) ]");

		cerr << " ��ü �̵� Ƚ�� = " << nMove << endl;
		cerr << " ���� ������ �� = " << countItems() << endl;
		//for (int i = 0; i < pMon.size(); i++)
		//	pMon[i]->print();
		
		sort(pMon.begin(), pMon.end(), compare); // �ǽð� ���� 
		for (int i = 0; i < pMon.size(); i++) {
			cout << "  ����" << i + 1 << "�� ";
			pMon[i]->print();
		}
	}
public:
	//MonsterWorld(int w, int h) : world(h, w), canvas(w, h), xMax(w), yMax(h) {
	MonsterWorld(int w, int h) : world(h), canvas(w, h), xMax(w), yMax(h) {
		for (int y = 0; y < yMax; y++) {
			//world[y] = Vector<int>(w);
			//for (int x = 0; x < xMax; x++) Map(x, y) = 1;
			world[y] = vector<int>(w,1);
		}
	}
	~MonsterWorld() { 
		for (int i = 0; i < pMon.size(); i++)
			delete pMon[i];
	}
	void add(Monster* m) {
		//if (nMon < MAXMONS) pMon[nMon++] = m;
		pMon.push_back(m);
	}
	void play(int maxwalk, int wait) {
		print();
		cerr << " ���͸� ��������...";
		getchar();
		for (int i = 0; i < maxwalk; i++) {
			//for (int k = 0; k < nMon; k++)
			//	pMon[k]->move(world.Data(), xMax, yMax);
			
			//((Zombie*)pMon[0])->move(world.Data(), xMax, yMax);
			//((Vampire*)pMon[1])->move(world.Data(), xMax, yMax);
			//((KGhost*)pMon[2])->move(world.Data(), xMax, yMax);
			//((Jiangshi*)pMon[3])->move(world.Data(), xMax, yMax);
			//((Jiangshi*)pMon[4])->move(world.Data(), xMax, yMax);
			
			for (int k = 0; k < pMon.size(); k++){
				//pMon[k]->move(world.Data(), xMax, yMax);
				pMon[k]->move(world, xMax, yMax);
			}
			nMove++;
			print();
			if (isDone()) break;
			Sleep(wait);
		}
	}
};
