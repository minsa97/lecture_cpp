// 07_string_test.cpp

#include <iostream>
#include <string>
using namespace std;

int main(){
	string s1, s2 = "Game"; 		
	int len1=s1.size(), len2=s2.size();
    cout<<"s1길이:"<<len1<<" , s2길이:"<<len2<<endl;

	s1 = s2 + ' ' + "Over"; 		
	if (s1 == "Game Over")			
		cout << s1 << "가 맞습니다\n";

    //////////////////////////////////////////
	cout << s1.find("Over") << endl; //Over의 위치
	cout << s1.find("e", 4) << endl; //4번 이후로 e의 첫 위치

    //////////////////////////////////////////
	cout << s1[0] << endl;
	cout << s1.substr(5, 4) << endl; //5번째부터 4글자 선택

    //////////////////////////////////////////
	printf("s1 = %s\n", s1.c_str()); // string을 c-style문자열로 변경
	
    cout<<"string 입력: ";
    getline(cin, s1);
	cout <<"입력한 문자열: "<< s1 << endl;

    return 0;
}