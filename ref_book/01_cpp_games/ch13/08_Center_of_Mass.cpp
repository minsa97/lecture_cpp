// 08_Center_of_Mass.cpp
#include <iostream>
#include <cmath>

using namespace std;

template <typename T>
class Point {
	T	x, y;
public:
	Point(T xx = 0, T yy = 0) : x(xx), y(yy) { }
	double magnitude() { return sqrt((double)x*x + y*y); }
	Point operator+(Point p) { return Point(x + p.x, y + p.y); }
	Point operator-(Point p) { return Point(x - p.x, y - p.y); }

	friend Point<double> operator*(double s, Point p) {
		return Point<double>(s*p.x, s*p.y);
	}

	friend ostream& operator << (ostream& os, const Point& p) {
		os << "(" << p.x << "," << p.y << ")";
		return os;
	}
};

int main() {
	int image[6][6] = { { 0, 0, 0, 0, 0, 0 },
						{ 0, 0, 1, 1, 1, 0 },
						{ 0, 0, 1, 1, 1, 0 },
						{ 0, 0, 1, 1, 0, 0 },
						{ 0, 0, 1, 1, 0, 0 },
						{ 0, 0, 0, 0, 0, 0 }
	};
	Point <double> sum(0.0, 0.0), center;
	int nPixel = 0;
	for (int y = 0; y < 6; y++)
	 for (int x = 0; x < 6; x++) {
		if (image[y][x] == 1) {
			Point <double> p(x, y);
			sum = sum + p;		// +연산자 중복함수 사용
			nPixel++;
		}
	}
	center = (1.0 / nPixel) * sum;		// *연산자 중복함수 사용
	cout << "물체의 무게 중심 = " << center << endl;

    return 0;
}