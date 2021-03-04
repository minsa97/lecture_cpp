// 05_income_tax.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int income=12000, in;  // 연봉 1억 2000만원
	double tax = 0;
	//cout<<"연봉을 입력하세요 ==> ";
	//cin>>income;

	in = income;

	if (income > 15000) {
		tax += (income - 15000)*0.38;
		income = 15000;
	}
	if (income > 8800) {
		tax += (income - 8800)*0.35;
		income = 8800;
	}
	if (income > 4600) {
		tax += (income - 4600)*0.24;
		income = 4600;
	}
	if (income > 1200) {
		tax += (income - 1200)*0.15;
		income = 1200;
	}
	tax += income*0.06;
	cout<<" 전체세금은 "<<tax<<"만원입니다.\n";
	cout<<" 순수소득은 "<<in-tax<<"만원입니다.\n";

    return 0;
}