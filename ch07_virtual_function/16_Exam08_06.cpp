// 16_Exam08_06.cpp

#include <iostream>
#include <string>
using namespace std;

class BaseMemory{
    char *mem;
protected:
    BaseMemory(int size){ mem=new char[size];}
    ~BaseMemory(){delete[] mem;}
    void setData(int index, char val) { mem[index] = val; }
    char getData(int index) { return mem[index]; }
};

class ROM: public BaseMemory{
    int length;
public:
    ROM(int size, char memory[], int len):BaseMemory(size){
        length=len;
        for(int i=0;i<len;i++){
            setData(i, memory[i]);
        }
    }
    char read(int i){
        return getData(i);
    }
};

class RAM: public BaseMemory{
public:
    RAM(int size):BaseMemory(size){}

    void write(int i, char x){
        setData(i, x);
    }
    char read(int i){
        return getData(i);
    }
};

int main(){
    char x[6]="hello";
    ROM biosROM(1024*10, x, 5);
    RAM mainMemory(1024*1024);

    for(int i=0;i<5;i++)
        mainMemory.write(i, biosROM.read(i));

    for(int i=0;i<5;i++)
        cout<<mainMemory.read(i);
    
    cout<<endl;
    
    return 0;
}