// MyString.h
#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class CMyString{
public:
	CMyString();
	~CMyString();

private:
	// 문자열을 저장하기 위해 동적 할당한 메모리를 가리키는 포인터
	char* pstr;

	// 저장된 문자열의 길이
	int len;

public:
	int SetString(const char* pch);
	const char* GetString();
	void Release();
};