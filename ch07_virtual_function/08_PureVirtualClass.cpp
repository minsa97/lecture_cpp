// 08_PureVirtualClass.cpp

#include <iostream>
using namespace std;

class CMyInterface{
public:
    CMyInterface(){
        cout<<"CMyInterface()"<<endl;
    }
    virtual int GetData() const=0;
    virtual void SetData(int x)=0;
};

class CMyData: public CMyInterface{
private:
    int n;
public:
    CMyData(){
        cout<<"CMyData()"<<endl;
    }
    int GetData() const{
        return n;
    }
    void SetData(int x){
        n=x;
    }
};

int main(){
    CMyData a;
    a.SetData(5);

    cout<<a.GetData()<<endl;
    
    return 0;
}