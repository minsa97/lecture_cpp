// 12_temp_object.cpp

#include <iostream>
using namespace std;
 
class CTestData{
public:
    CTestData(int a, string b) : x(a), name(b){
        cout << "CTestData(int): " << name << endl;
    }
 
    ~CTestData(){
        cout << "~CTestData(): " << name << endl;
    }
 
    CTestData(const CTestData &rhs) : x(rhs.x), name(rhs.name) {
        cout << "CTestData(const CTestData &): " << name << endl;
    }
 
    CTestData& operator=(const CTestData &rhs){
        cout << "operator=" << endl;
 
        // 값은 변경하지만 이름(m_pszName)은 그대로 둔다.
        x = rhs.x;
 
        return *this;
    }
 
    int GetData() const { return x; }
    void SetData(int a) { x = a; }
 
private:
    int x = 0;
 
    // 변수 이름을 저장하기 위한 멤버
    string name;
};
 
// CTestData 객체를 반환하는 함수다.
CTestData test(int nParam){ 
    // CTestData 클래스 인스턴스인 a는 지역변수지역 변수다.
    // 따라서 함수가 반환되면 소멸한다.
    CTestData a(nParam, "a");   //<-- 변환 생성자가 호출되면서  local CTestData의 객체 생성
                                                        
 
    return a;    //<-- local 객체는 사라지므로 컴파일러가 자동으로 임시객체 생성
                 //                복사가 일어난 후 , local  객체는 사라진다.
                                
}
 
int main(){
    CTestData b(5, "b");
    cout << "*****Before*****" << endl;
 
    // 함수가 반환하면, 임시 객체가 생성됐다가 대입 연산 후 즉시 소멸한다!
    b = test(10);   //<-- 임시객체가 =operator를 통해 b 객체로 값을 전달하게 된다.
                    //    모든 게 끝나면  임시객체도 사라지게 된다.


    cout << "*****After*****" << endl;
    cout << b.GetData() << endl;
 
    return 0;
}