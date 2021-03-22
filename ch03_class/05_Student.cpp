// 05_Student.cpp

#include <iostream>
using namespace std;

class Student{
public:
    double kor,eng,math;
    Student(double a, double b, double c){
        kor=a;
        eng=b;
        math=c;
    }
    double average(){
        return (kor+eng+math)/3.;
    }
};

int main(){
    Student john(90,91,92);
    Student sarah(80,100,100);

    cout<<"john 평균: "<<john.average()<<endl;
    cout<<"sarah 평균: "<<sarah.average()<<endl;
    return 0;
}