// 12_Exam08_03.cpp

#include <iostream>
#include <string>
using namespace std;

class Point {
    int x,y;
public:
    Point(int x, int y) { this->x = x; this->y = y; }
    int getX(){ return x; }
    int getY(){ return y; }
protected:
    void move(int x, int y) { this->x = x; this->y = y; }
};

class ColorPoint: public Point{
    string color;
public:
    ColorPoint(int x, int y, string c):Point(x,y),color(c){}
    void setPoint(int x, int y){ move(x,y); }
    void setColor(string c){ color=c; }
    void show(){
        cout << color << "색으로 (" << getX() << "," << getY() << ")에 위치한 점입니다.\n";
    }
};

int main(){
    ColorPoint cp(5,5,"Red");
    cp.setPoint(10,20);
    cp.setColor("Blue");
    cp.show();

    return 0;
}