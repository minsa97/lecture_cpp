// MyStringEx.h
#include "MyString.h"

class CMyStringEx: public CMyString {
public:
	CMyStringEx();
	~CMyStringEx();
	int Find(const char * pstr);
	int SetString(const char *pstr);
};