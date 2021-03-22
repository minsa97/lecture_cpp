// 05_Tower.cpp

#include <iostream>
using namespace std;

class Tower{
public:
    int height;

    // 생성자
    Tower(){
        height=10;
    }
    Tower(int h){
        height=h;
    }

    int getHeight(){
        return height;
    }
};

int main(){
    Tower myTower;
    Tower seoulTower(100);
    Tower effelTower(1234);

    cout<<"높이는 "<<myTower.getHeight()<<"미터"<<endl;
    cout<<"높이는 "<<seoulTower.getHeight()<<"미터"<<endl;
    cout<<"높이는 "<<effelTower.getHeight()<<"미터"<<endl;

    return 0;
}