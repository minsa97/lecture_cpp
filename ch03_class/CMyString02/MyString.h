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
	char* pstr;
	int len;

public:
	int SetString(const char* pch);
	const char* GetString() const; // 멤버 읽기만 수행하므로 메서드를 상수화한다.
	void Release();
};