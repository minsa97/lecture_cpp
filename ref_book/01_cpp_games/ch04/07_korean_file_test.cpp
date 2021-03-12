// korean_file_test.cpp
#include <stdio.h>
#include <vector>
#include <locale>
using namespace std;

int main(){
    //freopen("111.txt","r",stdin); // 이거는 문제없다.
    _wsetlocale(LC_ALL,L"korean");
    _wfreopen(L"111_한글.txt",L"r",stdin);
    int n;
    scanf("%d",&n);

    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        v.push_back(x);
    }

    for(int i=0;i<v.size();i++){
        printf("%d ",v[i]);
    }
    printf("\n");
    return 0;
}
