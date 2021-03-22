// 05_CircleTest.cpp

#include <iostream>
using namespace std;

class Circle{
public:
    double radius;
    double getArea(){
        return 3.14*radius*radius;
    }
};

int main(){
    Circle donut;
    donut.radius=5;    
    cout<<"donut area: "<<donut.getArea()<<endl;

    Circle pizza;
    pizza.radius=15;
    cout<<"pizza area: "<<pizza.getArea()<<endl;

    return 0;
}