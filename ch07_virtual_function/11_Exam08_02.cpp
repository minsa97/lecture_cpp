// 11_Exam08_02.cpp

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
    NamedCircle(){}

    NamedCircle(int r, string n){
        setRadiusName(r, n);
    }

    void show(){
        cout<<"반지름이 "<<getRadius()<<"인 "<<this->name<<endl;        
    }

    void setRadiusName(int r, string n){
        setRadius(r);
        this->name=n;
    }

    string getName(){
        return name;
    }
};

int main(){
    freopen("10_Exam08_02.txt","r",stdin);

    //cout<<"5개의 정수 반지름과 원의 이름을 입력하세요."<<endl;

    NamedCircle pizza[5];

    double max=0;
    int index=0;
    for(int i=0;i<5;i++){
        //cout<<i+1<<">> ";
        int r;
        string name;
        cin>>r>>name;
        //cout<<"피자: "<<name<<"("<<r<<")"<<endl;
        pizza[i].setRadiusName(r, name);
        
        if(max<pizza[i].getArea()){
            max=pizza[i].getArea();
            index=i;
        }
    }

    cout<<"가장 면적이 큰 피자는 \""<<pizza[index].getName()<<"\" 입니다."<<endl;

    return 0;
}