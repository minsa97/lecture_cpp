// 02_gugudan_goto.cpp

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	// 절차적 프로그래밍
	int i = 1;
	int dan = 3;
	cout<<"[절차적 프로그래밍]\n";
	cout<<"[구구단 "<<dan<<" 단]\n";
loop:
	cout<<setw(2)<<dan<<" x"<<setw(2)<<i<<"= "<<setw(2)<<dan*i<<endl;
	i++;
	if (i <= 9) goto loop;
    return 0;
}