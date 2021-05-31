// 11_Exam08_01.cpp

#include <iostream>
#include <string>
using namespace std;

class Circle{
    int radius;
public:
    Circle(int radius=0){
        this->radius=radius;
    }
    int getRadius(){
        return radius;
    }
    void setRadius(int r){
        this->radius=r;
    }
    double getArea(){
        return 3.14*radius*radius;
    }
};

class NamedCircle: public Circle{
    string name;
public:
    NamedCircle(int r, string n){
        setRadius(r);
        this->name=n;
    }
    void show(){
        cout<<"반지름이 "<<getRadius()<<"인 "<<this->name<<endl;
    }
};

int main(){
    NamedCircle waffle(3,"waffle");
    waffle.show();

    return 0;
}