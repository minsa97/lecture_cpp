// 25_static_member.cpp

#include <iostream>
using namespace std;
 
class CTest{
public:
    CTest(int n) : x(n) { cnt++; }
    int GetData() { return x; };
    void ResetCount() { cnt = 0; };
 
    // 정적 메서드 선언 및 정의
    static int GetCount(){
        return cnt;
    };
 
private:
    int x;
 
    // 정적 멤버 변수 선언(정의는 아니다!)
    static int cnt;
};
 
// CTest 클래스의 정적 멤버 변수 정의
int CTest::cnt = 0;
 
int main(){
    CTest a(5), b(10);
 
    // 정적 멤버에 접근.
    cout <<"현재 count:"<< a.GetCount() << endl;
    b.ResetCount();
 
    // 정적 멤버에 접근. 인스턴스 없이도 접근 가능!
    cout <<"현재 count:"<< CTest::GetCount() << endl;
 
    return 0;
}