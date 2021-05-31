// 14_Exam08_05.cpp

#include <iostream>
#include <string>
using namespace std;

class BaseArray {
    int capacity; // 배열의 크기
    int *mem; // 정수 배열을 만들기 위한 메모리의 포인터
protected: // 생성자가 protected 
    BaseArray(int capacity=100){
        this->capacity = capacity; mem = new int [capacity];
    }
    ~BaseArray() { delete [] mem; }
    void put(int index, int val) { mem[index] = val; }
    int get(int index) { return mem[index]; }
    int getCapacity() { return capacity; }
};

class MyQueue: public BaseArray{
    int front=0;
    int rear=0;
public:
    MyQueue(int c):BaseArray(c){}
    void enqueue(int x){
        if(rear>=getCapacity()) return;
        put(rear, x);
        rear++;
    }
    int capacity(){
        return getCapacity();
    }
    int length(){
        return rear-front;
    }

    int dequeue(){
        if(front<rear){
            int temp=get(front);
            front++;
            return temp;
        }
        return -99999;
    }
};

int main() {
    MyQueue mQ(100);
    int n;
    cout << "큐에 삽입할 5개의 정수를 입력하라>> ";
    for(int i=0; i<5; i++){
        cin >> n;
        mQ.enqueue(n); // 큐에 삽입 
    }
    cout << "큐의 용량:" << mQ.capacity() << ", 큐의 크기:" << mQ.length() << endl;
    cout << "큐의 원소를 순서대로 제거하여 출력한다>> ";
    while(mQ.length() != 0){
        cout << mQ.dequeue() << ' '; // 큐에서 제거하여 출력 
    }
    cout << endl << "큐의 현재 크기 : " << mQ.length() << endl;
    
    return 0;
}