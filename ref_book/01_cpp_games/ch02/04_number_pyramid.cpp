// 04_number_pyramid.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int height=6;

	//cout<<"높이를 입력하세요: ";
	//cin>>height;
	for (int i = 1; i <= height; i++) {
		for (int j = 0; j<height - i; j++)
			cout<<"   ";			// 공백 출력
		for (int j = 0; j<i; j++)
			cout<<setw(3)<<j*2+1;	// 증가하는 숫자 출력
		for (int j = i - 2; j >= 0; j--)
			cout<<setw(3)<<j*2+1;	// 감소하는 숫자 출력
		cout<<"\n";				// 다음 줄로 이동
	}

    return 0;
}