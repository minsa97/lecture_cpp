// 07_Point_cls_temp.cpp

#include <iostream>
#include <cmath>
using namespace std;

template <typename T>
class Point {
	T  x, y;
public:
	Point(T xx = 0, T yy = 0) : x(xx), y(yy) { }
	double magnitude() { return sqrt((double)x*x + y*y); }
	Point operator+(Point p) { return Point(x + p.x, y + p.y); }
	Point operator-(Point p) { return Point(x - p.x, y - p.y); }

	friend Point operator*(double s, Point p) {
		return Point((T)(s*p.x), (T)(s*p.y));
	}

	friend ostream& operator << (ostream& os, const Point& p) {
		os << "(" << p.x << "," << p.y << ")";
		return os;
	}
};

int main() {
	Point <int> p1(1, 2), p2(3, 4);
	Point <double> q1(5.0, 6.0), q2(7.0, 8.0);

	cout << "p1    = " << p1 << endl;
	cout << "p2    = " << p2 << endl;
	cout << "p1+p2 = " << p1 + p2 << endl;
	cout << "0.5*p2= " << 0.5*p2 << endl<< endl;

	cout << "q1    = " << q1 << endl;
	cout << "q2    = " << q2 << endl;
	cout << "0.5*q2= " << 0.5*q2 << endl;

    return 0;
}