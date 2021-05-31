// 09_InterfaceSample.cpp

#include <iostream>
using namespace std;

class CMyObject{
protected:
    int deviceID;
public:
    CMyObject(){}
    virtual ~CMyObject(){}

    virtual int GetDeviceID()=0;
};

class CMyTV:public CMyObject{
public:
    CMyTV(int x){deviceID=x;}
    int GetDeviceID(){
        //cout<<"CMyTV:GetDeviceID()"<<endl;
        return deviceID;
    }
};

class CMyPhone:public CMyObject{
public:
    CMyPhone(int x){deviceID=x;}
    int GetDeviceID(){
        //cout<<"CMyPhone:GetDeviceID()"<<endl;
        return deviceID;
    }
};

void PrintID(CMyObject *p){
    cout<<"Device ID: "<<p->GetDeviceID()<<endl;
}


int main(){
    CMyTV a(5);
    CMyPhone b(10);

    PrintID(&a);
    PrintID(&b);

    return 0;
}