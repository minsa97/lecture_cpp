// 01_short_overflow.cpp

#include <iostream>
using namespace std;

int main(){
	short n = 0;
loop:
	n = n + 1;
	if (n > 0) {
		//cout<<"\r short 최댓값 = "<< n;
		goto loop;
	}
	cout<<"\n오버플로우 발생"<<endl;
	cout<<" short 최솟값 = "<<n<<endl;

    return 0;
}