// 02_FileIOTextMode.cpp

#include <iostream>
#include <cstdlib>
using namespace std;

void fprintArray(int a[], int len, FILE* fp = stdout) {
	for (int i = 0; i < len; i++)
		fprintf(fp, "%d ", a[i]);
	fprintf(fp, "\n");
}

int main(){
    setlocale(LC_ALL,"");  // 한글 파일명 읽어오기
	FILE *fp;
	int a[10], b[10];

	for (int i = 0; i < 10; i++) 
        a[i] = rand();

	cout<<" 원본 데이터: ";
	fprintArray(a, 10);

	fp = fopen("ascii.txt", "w");
    //cout<<fp<<endl;

	if (fp != NULL) {
		fprintArray(a, 10, fp);
		fclose(fp);
	}
	fp = fopen("ascii.txt", "r");
	if (fp != NULL) {
		for (int i = 0; i < 10; i++)
			fscanf(fp, "%d", &(b[i]));
		cout<<" 아스키 파일: ";
		fprintArray(b, 10);
		fclose(fp);
	}

    return 0;
}