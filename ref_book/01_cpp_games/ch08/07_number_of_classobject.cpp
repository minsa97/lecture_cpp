// 07_number_of_classobject.cpp

#include <iostream>
#include <string>
using namespace std;

class Point {
	int x, y;
	static int count;		// Point 객체의 개수
public:
	static void printCount() { printf("PtCount=%d\n", count); }

	Point(int xx = 0, int yy = 0) : x(xx), y(yy) { count++; }
	~Point() { count--; }
	void print(string msg = "P=") {
		cout<<msg<<" ("<<this->x<<","<<this->y<<")\n";
	}
	void add(Point a, Point b) {
		x = a.x + b.x;
		y = a.y + b.y;
	}
};
int Point::count = 0;		// Point 객체의 개수

int main(){
	Point p(1, 2), q(3, 4), r; 
    Point::printCount(); // 3

	p.print(" P = ");
	q.print(" Q = ");
	Point* pPt;		  
    Point::printCount(); // 3

	pPt = new Point(5, 6);	  
    Point::printCount(); // 4

	pPt->print("pPt= ");
	delete pPt;		  
    Point::printCount(); // 3

	r.add(p, q);		  
    Point::printCount(); // 3
	
    r.print("P+Q= ");

    return 0;
}