// 4Â÷_01.c

#include <stdio.h>

int num_digit(int);
int convert_top(int);
int POWER(int);

int main(void) {
    //freopen("4Â÷_01.txt", "r", stdin);
    int n= 769812773;
    //scanf("%d", &n);
    printf("n=%d\n", n);


    int x = convert_top(n);
    printf("x=%d\n", x);

    return 0;
}

int num_digit(int x) {
    int cnt = 0;
    while (x > 0) {
        x = x / 10;
        cnt++;
    }
    return cnt;
}

int POWER(int k) {
    //printf("k=%d\n", k);
    int i, tens = 1;
    for (i = 1; i <= k; i++)
        tens = tens * 10;
    return tens;
}

int convert_top(int x) {
    int k = num_digit(x);
    int y = x / POWER(k - 2);

    if ((y >= 'A' && y <= 'Z') || (y >= 'a' && y <= 'z'))
        printf("%c", y);
    else
        printf("*");

    return x - y * POWER(k - 2);
}
