// 14_rvalue_ref.cpp
#include <iostream>
using namespace std;

class DataBox { 
private: //! 비싼 생성비용의 원인. 
    int data[100]; public: //! 기본 생성자. 
    DataBox() { 
        printLog("생성자"); 
    } //! 현재 객체의 주소를 출력하는 로깅함수. 
    void printLog(const string &tag) { 
        printf("%-10s : %p \n", tag.c_str(), this); 
    } 
};  

DataBox loopback(DataBox dataBox) { 
    dataBox.printLog("콜백함수 안"); 
    return dataBox; 
} 

int main() { 
    loopback( DataBox() ).printLog("콜백함수 후"); 
}