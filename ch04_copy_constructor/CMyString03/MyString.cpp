// MyString.cpp

#include "MyString.h"

CMyString::CMyString(): pstr(NULL), len(0){ }

CMyString::CMyString(const CMyString &rhs): pstr(NULL), len(0){
	this->SetString(rhs.GetString());
}

CMyString::~CMyString(){
	Release();
}

CMyString& CMyString::operator=(const CMyString &rhs){
	if(this!=&rhs)
		this->SetString(rhs.GetString());
	return *this;
}

int CMyString::SetString(const char* p){
	Release();

	if (p == NULL)
		return 0;

	int n = strlen(p);

	if (n == 0)
		return 0;

	pstr = new char[n + 1];

	strcpy(pstr, p);
	len = n;

	return n;
}

const char* CMyString::GetString() const{
	return pstr;
}

void CMyString::Release(){
	if (pstr != NULL)
		delete[] pstr;

	pstr = NULL;
	len = 0;
}