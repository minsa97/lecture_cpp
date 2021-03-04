// 33_실습7.cpp
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    for (;;) {
        cout << "종료하고싶으면 yes를 입력하세요>>";
        char text[100];
        cin.getline(text, 100);
        if (strcmp(text, "yes") == 0) {
            cout << "종료합니다..." << endl;
            break;
        }
    }
}