// 03_cpp_file.cpp

#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <locale>
#include <codecvt>
 
using namespace std;
 
int main() {
    //////////////////////////////////////////////////////////////
    // Write file in UTF-8
    setlocale(LC_ALL, ""); // c에서 사용
    //std::locale::global ( std::locale("") ); // c++에서 사용

    cout << "C++ 파일 입출력 스트림" << endl;

    wofstream fout;

    wstring wfname(L"샘플.txt");

    char* pfname = new char[wfname.size()*2];
    wcstombs(pfname, wfname.c_str(), wfname.size()*2);
    fout.open(pfname);
    cout<<pfname<<endl;
 
    fout << L"aaa"<<endl;
    fout << L"파일에 쓰기 테스트" << endl;
    fout << L"이 문장은 파일의 내용입니다" << endl;
    fout << L"test terminated"<< endl;
    fout << L"------------------" << endl;
 
    fout.close(); 
    cout << "파일에 쓰기 완료" << endl;

    //////////////////////////////////////////////////////////////
    // Read file in UTF-8
    wifstream fin;
    fin.open(pfname); // 텍스트 모드로 파일에서 읽기위해 와이드입력 스트림 생성
 
    if(!fin.good()) {
        cerr << "파일 열기 실패" << endl;
        exit(1);
    }
 
    wstring line;
    while(!fin.eof()) {
        getline(fin, line);
        wcout << line << endl;
    }
    fin.close(); 
    cout << "파일에서 와이드 문자열 읽기 완료" << endl;

    return 0;
}