// MyStringEx.cpp
#include "MyStringEx.h"

CMyStringEx::CMyStringEx(){}
CMyStringEx::~CMyStringEx(){}

int CMyStringEx::Find(const char * pstr){
	if (pstr == NULL || GetString() == NULL)
		return -1;

	const char *pResult = strstr(GetString(), pstr);

	if (pResult != NULL)
		return pResult - GetString();

	return -1;
}

void CMyStringEx::OnSetString(char *pch, int n){
	if(strcmp(pch, "멍멍이아들")==0){
		strcpy(pch,"*착한아들*");
	}
}