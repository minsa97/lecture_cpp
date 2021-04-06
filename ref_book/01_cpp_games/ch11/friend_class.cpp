// friend_class.cpp

#include <iostream>
#include <string>
using namespace std;

class Point {
	int x, y; // private 멤버
	friend class Shape;
	friend class Line;
public:
	Point(int xx = 0, int yy = 0) : x(xx), y(yy) { }
	void print(string s = "점") { 
        cout<<s<<"("<<x<<","<<y<<")\n"; 
    }
};

class Shape {
protected:
	Point p; // 위치
public:
	Shape(int x = 0, int y = 0) : p(x, y) { }
	void draw() { 
        cout<<"[ 형태 ] 위치=("<<p.x<<","<<p.y<<")\n"; 
    }
};

class Line : public Shape {
	Point q;
public:
	Line(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0) : Shape(x1, y1), q(x2, y2) { }
	void draw() {
        cout<<"[ 선분 ] P1=("<<p.x<<","<<p.y<<")  P2=("<<q.x<<","<<q.y<<")\n"; 
	}
};

int main() {
	Line l(3, 4, 5, 6);
	l.draw();

    return 0;
}