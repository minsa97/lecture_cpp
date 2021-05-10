// MyStringEx.cpp
#include "MyStringEx.h"

CMyStringEx::CMyStringEx(){}
CMyStringEx::~CMyStringEx(){}
CMyStringEx::CMyStringEx(const char * pstr):CMyString(pstr){}

int CMyStringEx::Find(const char * pstr){
	if (pstr == NULL || GetString() == NULL)
		return -1;

	const char *pResult = strstr(GetString(), pstr);

	if (pResult != NULL)
		return pResult - GetString();

	return -1;
}

int CMyStringEx::SetString(const char *pstr){
	int n;
	if(strcmp(pstr,"멍멍이아들")==0)
		n=CMyString::SetString("착한사람");
	else
		n=CMyString::SetString(pstr);

	return n;
}