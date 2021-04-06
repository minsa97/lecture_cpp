// canva.h

#pragma once
#include <iostream>
#include <string>
#include "Point.h"			// Point 사용을 위해 추가

//#define MAXLINES 100
#include "Vector.h"
using namespace std;

class Canvas {
	// string line[MAXLINES];
	Vector<string> line;	// 화면 출력을 위한 벡터 객체
	int xMax, yMax;		// 맵의 크기
public:
	//Canvas(int nx = 10, int ny = 10) : xMax(nx), yMax(ny) {
	Canvas(int nx = 10, int ny = 10) : line(ny), xMax(nx), yMax(ny) {
		for (int y = 0; y < yMax; y++)
			line[y] = string(xMax * 2, ' ');
	}
	void draw(int x, int y, string val) {
		if (x >= 0 && y >= 0 && x<xMax && y<yMax)
			line[y].replace(x * 2, 2, val);
	}
	
	// 다음 함수 추가
	void draw(Point& p, string val) { draw(p.x, p.y, val); }
		
	void clear(string val = ". ") {		// 디폴트 매개변수: 공백 2개
		for (int y = 0; y < yMax; y++)
			for (int x = 0; x < xMax; x++)
				draw(x, y, val);
	}
	void print(string title = "<My Canvas>") {
		system("cls");
		cout << title << endl;
		for (int y = 0; y < yMax; y++)
			cout << line[y] << endl;
		cout << endl;
	}
};
