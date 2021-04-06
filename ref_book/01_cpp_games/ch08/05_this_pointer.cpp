// 05_this_pointer.cpp
#include <iostream>
#include <string>
using namespace std;

class Point {
	int x, y;
public:
	Point(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}
	void print(string msg = "P=") {
		cout<<msg<<" ("<<this->x<<","<<this->y<<")\n";
	}
	void whereAmI() {
		printf("주소=0x%x\n\n", this);
	}
};

int main(){
	Point	p(1, 2), q(3, 4);
	p.print(" P = ");
	p.whereAmI();
	q.print(" Q = ");
	q.whereAmI();

    return 0;
}