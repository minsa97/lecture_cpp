// 26_cin_good.cpp

#include <iostream>
using namespace std;

int main(){
    /*
    cin 플래그
    failbit 입력에 실패했다는 뜻, 정수를 입력받는데 문자가 입력된 경우 1 이 된다.
    eofbit  파일의 끝에 도달했음, 더이상 읽을 문자가 없어 이 에러가 설정된다.
    badbit  스트림이 물리적으로 손상되었음, 더 이상 읽을 수 없어 이 에러를 설정한다.
    goodbit 위의 세 에러가 발생하지 않았음
    */

    int num=1;
    cout<<"숫자 입력 >> ";
    cin>>num;

    if(cin.good()){
        cout<<"정상 입력"<<endl;        
    }
    if(cin.fail()){
        cout<<"비정상 입력"<<endl;        
    }

    return 0;
}