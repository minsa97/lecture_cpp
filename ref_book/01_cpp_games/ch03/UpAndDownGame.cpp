// UpAndDownGame.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int playUpAndDown(int n, int min, int max){
	int	input, i;
 	for (i = 0; i<10; i++) {
 		cout<<"["<<setw(2)<<i+1<<"회]"<<min<<" ~ "<<max<<" 사이의 값 예측 =>";
 		cin>>input;

 		if (n == input) break;
		else if (n > input) {
			cout<<" 더 큰 숫자입니다!\n";
			min = input;
		}
 		else {
 			cout<<" 더 작은 숫자입니다!\n";
 			max = input;
		}
	}
	return 10 * (10-i);
}