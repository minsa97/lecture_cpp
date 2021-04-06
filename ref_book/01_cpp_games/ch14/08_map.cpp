// 08_map.cpp

#include <iostream>
#include <iomanip>
#include <map>
#include <string>
using namespace std;

int main(){
	map<string, string> myDic;
	map<string, string>::iterator it;

	myDic["hello"] = "안녕하세요?";
	myDic["world"] = "아름다운 세상";
	myDic["data"] = "자료";
	myDic["structure"] = "구조";
	myDic["list"] = "리스트";

	for (it = myDic.begin(); it != myDic.end(); ++it)
		cout << setw(12) << it->first << " == " + it->second + "\n";

	it = myDic.find("structure");
	if (it == myDic.end())
		cout << "[검색 실패] 찾는 단어가 없습니다.\n";
	else	cout << "[검색 성공] " << it->first + " " + it->second << endl;

	if (myDic.find("C++") == myDic.end())
		cout << "[검색 실패] 찾는 단어가 없습니다.\n";

	myDic.erase("structure");

	for (it = myDic.begin(); it != myDic.end(); ++it)
		cout << setw(12) << it->first << " == " + it->second + "\n";

    return 0;
}