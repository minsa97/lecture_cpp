// 05_bad_copy_constructor2.cpp
#include <iostream>
using namespace std;
 
class CMyData{
public:
    CMyData(int nParam){
        px = new int;
        *px = nParam;
    }
 
    int GetData(){
        if (px != NULL)
            return *px;
 
        return 0;
    }
 
private:
    // 포인터 멤버 데이터
    int *px = nullptr;
};
 
int main(){
    CMyData a(10);
    CMyData b(a);
    cout << a.GetData() << endl;
    cout << b.GetData() << endl;
 
    return 0;
}