// MyStringEx.h
#include "MyString.h"

class CMyStringEx: public CMyString {
public:
	CMyStringEx();
	~CMyStringEx();
	int Find(const char * pstr);
	void OnSetString(char *pch, int n); // 자식에서는 virtual을 안써도 된다.
};