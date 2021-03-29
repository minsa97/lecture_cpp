// 16_move_test.cpp
#include <iostream>
#include <ctime>
using namespace std;

class MyArray{
    int *pArr;
    int size;

public:
    MyArray(int len): pArr(new int[len]), size(len){
        for(int i=0;i<size;i++)
            pArr[i]=i;
    }

    MyArray(const MyArray &rhs): pArr(new int[rhs.size]), size(rhs.size){
        for(int i=0;i<size;i++)
            pArr[i]=rhs.pArr[i];
    }

    // 이동생성자
    MyArray(MyArray &&rhs):pArr(rhs.pArr), size(rhs.size){
        rhs.pArr=nullptr;
    }

    ~MyArray(){
        delete[] pArr;
    }
};

int main(){
    MyArray a(100000000);

    // 복사생성자
    clock_t st1=clock();
    MyArray mycopy(a);
    clock_t ed1=clock();

    double msec1=1000.*(ed1-st1)/CLOCKS_PER_SEC;
    cout<<"Copy 시간: "<<msec1<<" ms"<<endl;

    // 이동생성자
    clock_t st2=clock();
    MyArray mymopy(move(a));
    clock_t ed2=clock();

    double msec2=1000.*(ed2-st2)/CLOCKS_PER_SEC;
    cout<<"Move 시간: "<<msec2<<" ms"<<endl;

    
}