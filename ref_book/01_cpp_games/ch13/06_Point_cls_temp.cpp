// 06_Point_cls_temp.cpp

#include <iostream>
#include <cmath>
using namespace std; 

class Point {
	int  x, y;
public:
	Point(int xx = 0, int yy = 0) : x(xx), y(yy) { }
	double magnitude() { return sqrt((double)x*x + y*y); }
	Point operator+(Point p) { return Point(x + p.x, y + p.y); }
	Point operator-(Point p) { return Point(x - p.x, y - p.y); }

	friend Point operator*(double s, Point p) {
		return Point((int)(s*p.x), (int)(s*p.y));
	}

	friend ostream& operator << (ostream& os, const Point& p) {
		os << "(" << p.x << "," << p.y << ")";
		return os;
	}
};

int main() {
	Point p1(1, 2), p2(3, 4);

	cout << "p1    = " << p1 << endl;
	cout << "p2    = " << p2 << endl;
	cout << "p1+p2 = " << p1 + p2 << endl;
	cout << "0.5*p2= " << 0.5*p2 << endl;

    return 0;
}