// 33_실습16.cpp

/*
Wise men say, only fools rush in
But I can't help, falling in love with you

Shall I stay? Would it be a sin?
But I can't help, falling in love with you

Like a river flows, surely to the sea
Darling so it goes, soem things aren't meant to be ;

*/

#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int num = 0;
    int cnt[27] = { 0, };
    cout << "영어 텍스트를 입력하세요. 히스토그램을 그립니다.\n";
    cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다.\n";
    string alpha;
    getline(cin, alpha, ';');
    
    
    for (int i = 0; i<alpha.size(); ++i) {
        if (isalpha(tolower(alpha[i])) != 0) {
            cnt[tolower(alpha[i])-'a']++;
            //cout<<alpha[i]<<"-->"<<cnt[tolower(alpha[i])-'a']<<endl;
            num++;
        }
    }
    cout << "총 알파벳 수 " << num << endl;
    
    
    
    for (int i = 0; i < 26; ++i) {
        char asc = i + 'a';
        cout << asc << "(" << cnt[i] << ")";
        for (int j = 0; j <4 - cnt[i] / 10; ++j)
            cout << " ";
        cout << ":  ";
        for (int j = 1; j <= cnt[i]; ++j)
            cout << "*";
        cout << endl;
    }
    
    return 0;
}
