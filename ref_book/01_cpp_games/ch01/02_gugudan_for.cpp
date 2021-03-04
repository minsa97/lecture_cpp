// 02_gugudan_for.cpp

#include <iostream>
using namespace std;

void gugudan(int dan){
	for (int i = 1; i <= 9; i++)
		cout<<dan<<" x"<<i<<"= "<<dan*i<<endl;
}

int main(){
	// 구조적 프로그래밍
    int dan=3;
	cout<<"[절차적 프로그래밍]\n";
	cout<<"[구구단 "<<dan<<" 단]\n";
	gugudan(dan);

    return 0;
}