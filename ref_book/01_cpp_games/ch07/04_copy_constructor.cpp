// 04_copy_constructor.cpp

#include <iostream>
using namespace std;

struct Point {
	int  x, y;
	Point(int xx = 0, int yy = 0) : x(xx), y(yy) {
        cout<<"trans\n";
    }
    Point(const Point &rhs): x(rhs.x), y(rhs.y){ 
        cout<<"copy\n";
    }
};

Point readPoint() {
	Point p;
	cout << "(x,y): ";
	cin >> p.x >> p.y;
	return p;
}

void printPoint(Point p, string str = "Point") {
	cout << str << "= (" << p.x << "," << p.y << ")\n";
}

int main(){
	Point a;
	a = readPoint();
    cout<<"-----------\n";

	printPoint(a);

    cout<<"-----------\n";
    Point b=a;
    cout<<"-----------\n";
	printPoint(b);
    return 0;
}