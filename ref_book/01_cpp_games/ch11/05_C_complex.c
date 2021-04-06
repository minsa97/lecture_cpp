// 05_C_complex.c

#include <stdio.h>
#include <complex.h>
int main(void){
    double complex a = 5.5 + 4.2j;
    double complex b = 8.2I + 3.2;
    int size;
    size = sizeof(double complex);

    printf("sizeof(double complex) : %d bytes\n\n", size);
    printf("a : %4.2f %+4.2fi\n", creal(a), cimag(a));
    printf("b : %4.2f %+4.2fi\n", creal(b), cimag(b));
    printf("a + b = %4.2f %+4.2fi\n", creal(a + b), cimag(a + b));
    printf("a - b = %4.2f %+4.2fi\n", creal(a - b), cimag(a - b));
    printf("a * b = %4.2f %+4.2fi\n", creal(a * b), cimag(a * b));
    printf("a / b = %4.2f %+4.2fi\n\n", creal(a / b), cimag(a /b));

    return 0;
}