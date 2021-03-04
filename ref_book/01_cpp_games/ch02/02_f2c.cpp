// 02_f2c.cpp

#include <iostream>
using namespace std;

int main(){
	int 	choice;
	double	F, C;

	cout<<"온도 변환종류 선택.\n";
	cout<<" 1: C->F, 2: F->C ==> ";
	cin>>choice;

	if (choice == 1) {	// 섭씨 -> 화씨
		cout<<" 섭씨온도 입력: ";
		cin>>C;
		F = C * 9.0 / 5 + 32.;
		cout<<" 화씨온도 계산: "<<F<<endl;
	}

	if (choice == 2) {	// 화씨 -> 섭씨
		cout<<" 화씨온도 입력: ";
		cin>>F;
		C = (F - 32) * (5.0 / 9.0);
		cout<<" 섭씨온도 계산: "<<C<<endl;
	}

    return 0;
}