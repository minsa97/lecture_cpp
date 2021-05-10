// MyString.h
#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class CMyString{
public:
	CMyString();
	CMyString(const CMyString&); // 복사생성자
	CMyString(const char*);
	
    CMyString(CMyString &&rhs);// 이동 생성자
	~CMyString();
	CMyString& operator=(const CMyString&); // 대입연산자	
    CMyString& operator=(CMyString &&rhs); // 이동 대입 연산자
	CMyString operator+(const CMyString &rhs);
	CMyString& operator+=(const CMyString &rhs);
	char& operator[](int i);
	char operator[](int i) const;
	int operator==(const CMyString &rhs);
	int operator!=(const CMyString &rhs);

private:
	char* pstr;
	int len;

public:
	int SetString(const char* pch);
	const char* GetString() const; // 멤버 읽기만 수행하므로 메서드를 상수화한다.
	void Release();
	operator char*() const{
		return pstr;
	}
	int Append(const char* pWord);
	int GetLength() const;
	virtual void OnSetString(char *pch, int n);
};