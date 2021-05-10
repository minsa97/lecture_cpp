// MyString.cpp

#include "MyString.h"

CMyString::CMyString(): pstr(NULL), len(0){ }

// 복사생성자
CMyString::CMyString(const CMyString &rhs): pstr(NULL), len(0){
	this->SetString(rhs.GetString());
}

// 변환생성자
CMyString::CMyString(const char *p):pstr(NULL), len(0){
	SetString(p);
}

// 이동 생성자
CMyString::CMyString(CMyString &&rhs):pstr(NULL), len(0){
    cout << "move constructor" <<endl;
 
    // 얕은 복사를 수행해도 상관없다. 어차피 원본이 곧 소멸하기 때문이다!
    pstr = rhs.pstr;
    len = rhs.len;
 
    // 원본 임시 객체의 멤버들은 초기화한다. 절대로 해제하면 안 된다.
    rhs.pstr = NULL;
    rhs.len = 0;
}

CMyString::~CMyString(){
	Release();
}

CMyString& CMyString::operator=(const CMyString &rhs){
	if(this!=&rhs)
		this->SetString(rhs.GetString());
	return *this;
}

CMyString& CMyString::operator=(CMyString && rhs){
    cout<<"operator=(&&)"<<endl;
    this->pstr= rhs.pstr;
    this->len= rhs.len;

    rhs.pstr = NULL; // 매개변수에서 const를 제거해야 한다.
    rhs.len = 0;
	
    return *this;
}

CMyString CMyString::operator+(const CMyString &rhs){
	CMyString temp(pstr);
	temp.Append(rhs.GetString());    
	return temp;
}

CMyString& CMyString::operator+=(const CMyString &rhs){
	Append(rhs.GetString());
	return *this;
}

char& CMyString::operator[](int i){
    return pstr[i];
}

char CMyString::operator[](int i) const{
    return pstr[i];
}

int CMyString::operator==(const CMyString &rhs){
    if(pstr!=NULL && rhs.pstr!=NULL){
        if(strcmp(pstr,rhs.pstr)==0)
            return 1;
    }
    return 0;
}

int CMyString::operator!=(const CMyString &rhs){
    if(pstr!=NULL && rhs.pstr!=NULL){
        if(strcmp(pstr,rhs.pstr)==0)
            return 0;
    }
    return 1;
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

int CMyString::Append(const char* pWord){
	// 매개변수 유효성 검사
    if (pWord == NULL)
        return 0;
 
    int length = strlen(pWord);
    if (length == 0)
        return 0;
 
    if (pstr == NULL){// 내 쪽에 문자열이 없는 경우, 들어온 문자열이 내 문자열이 된다.
        SetString(pWord); 
        return len;
    }
 
    // 현재 문자열에 들어온 문자열을 연결한다.
    int myLength = len;
    char *ptemp = new char[myLength + length + 1];
    strcpy(ptemp, pstr);
    strcpy(ptemp + myLength, pWord);
 
    // 기존 문자열 삭제 및 멤버 정보 갱신
    Release();
    pstr = ptemp;
    len = myLength + length;
 
    return len;
}

int CMyString::GetLength() const {
    return len;
}