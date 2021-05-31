// 15_Exam08_06.cpp

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

class MyStack:public BaseArray{
private:
    int top;
public:
    MyStack(int c):BaseArray(c), top(-1){}

    void push(int x){
        top++;
        put(top,x);
    }

    int pop(){
        if(top>=0){
            int temp=get(top);
            top--;
            return temp;
        }
        return -9999;
    }

    int capacity(){
        return getCapacity();
    }
    int length(){
        return top+1;
    }
};

int main() {
    MyStack mStack(100);
    int n;
    cout << "스택에 삽입할 5개의 정수를 입력하라>> ";
    for(int i=0; i<5; i++){
        cin >> n;
        mStack.push(n); // 큐에 삽입 
    }
    cout << "스택의 용량:" << mStack.capacity() << ", 스택의 크기:" << mStack.length() << endl;
    cout << "스택의 원소를 순서대로 제거하여 출력한다>> ";
    while(mStack.length() != 0){
        cout << mStack.pop() << ' '; // 스택에서 제거하여 출력 
    }
    cout << endl << "스택의 현재 크기 : " << mStack.length() << endl;
    
    return 0;
}
