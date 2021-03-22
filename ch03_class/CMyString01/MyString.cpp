// MyString.cpp

#include "MyString.h"

CMyString::CMyString(): pstr(NULL), len(0){ }

CMyString::~CMyString(){
	// 객체가 소멸하기 전에 메모리를 해제한다.
	Release();
}

int CMyString::SetString(const char* p){
	// 새로운 문자열 할당에 앞서 기존 정보를 해제한다.
	Release();

	// NULL을 인수로 함수를 호출했다는 것은 메모리를 해제하고
	// NULL로 초기화하는 것으로 볼 수 있다.
	if (p == NULL)
		return 0;

	// 길이가 0인 문자열도 초기화로 인식하고 처리한다.
	int n = strlen(p);

	if (n == 0)
		return 0;

	// 문자열의 끝인 NULL 문자를 고려해 메모리를 할당한다.
	pstr = new char[n + 1];

	// 새로 할당한 메모리에 문자열을 저장한다.
	strcpy(pstr, p);
	len = n;

	// 문자열의 길이를 반환한다.
	return n;
}

const char* CMyString::GetString(){
	return pstr;
}

void CMyString::Release(){
	// 이 함수가 여러번 호출될 경우를 고려해 주요 멤버를 초기화한다.
	if (pstr != NULL)
		delete[] pstr;

	pstr = NULL;
	len = 0;
}