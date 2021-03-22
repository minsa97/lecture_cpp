// 09_access_control.cpp

#include <iostream>
using namespace std;

class CMyData{
    // 기본 접근 제어 지시자는 'private'이다.
    int data;

    //CMyData(){
    //}
 
public:    
    int getData(void) { 
        return data; 
    }
    void setData(int x) { 
        data = x; 
    }
};
 
int main(){
    CMyData d;
    d.setData(10);
    //d.data=10;
    cout <<"result: "<< d.getData() << endl;
    //cout <<"result: "<< d.data << endl;
 
    return 0;
}