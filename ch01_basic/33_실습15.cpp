// 33_실습15.cpp

/*
string 클래스에는 문자열을 자르는(토크나이징) 함수가 없다.
따라서 string을 자를 경우 string.h 헤더의 strtok함수를 사용하여 자른다.

1. string을 char[]형태로 변환하고
2. char[]를 strtok으로 잘라낸다
3. 잘라낸 char[]는 다시 string으로 변환하거나 용도에 맞게 사용한다.
*/

#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int main() {
    string str;
	char tmp[100] = "";
    while(true){
        cout<<"enter >> ";
        getline(cin, str);

        if(str=="q")
            break;
            
        //for (int i = 0; i<(int)s.size(); i++) tmp[i] = str[i];	
        strcpy(tmp, str.c_str());
        
        char *ptr = strtok(tmp, " ");
        string res[3];
        int i=0;
        while (ptr != NULL) {
            //cout << ptr << endl; //자른 문자열을 string에 넣고 싶으면 string(ptr) 형태로 써야함
            res[i++]=ptr; // string의 대입연산자를 사용한다.
            ptr = strtok(NULL, " ");//strtok는 일치하는게 없으면 NULL 반환
                                    //다음 문자열 시작주소는 함수의 static 변수에 기억되어 있다
                                    // 만약 분리하지 못했을 경우 NULL이 기억되며 NULL을 분리하면 NULL이 반환
        }

        int a=stoi(res[0]), b=stoi(res[2]);
        string op=res[1];

        cout<< a << op << b <<'=';
        if(op=="+") cout<< a + b <<endl;    
        else if(op=="-") cout<< a - b <<endl;
        else if(op=="*") cout<< a * b <<endl;
        else if(op=="/") cout<< a / b <<endl;
        else cout<<"error!!";
    }

    return 0;
}