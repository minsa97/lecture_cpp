// 04_FileIOBinaryMode.cpp

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

	for (int i = 0; i < 10; i++) a[i] = rand();

	cout<<" 원본 데이터: ";
	fprintArray(a, 10);

	fp = fopen("binarytest.bin", "w");
	if (fp != NULL) {
		fwrite(a, sizeof(int), 10, fp);
		fclose(fp);

	}
	fp = fopen("binarytest.bin", "r");
	if (fp != NULL) {
		fread(b, sizeof(int), 10, fp);
		cout<<"   이진 파일: ";
		fprintArray(b, 10);
		fclose(fp);

	}

    return 0;
}