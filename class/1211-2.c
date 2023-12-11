#include <stdio.h>
#include <stdlib.h>

typedef struct complex {
    int real;
    int imag;
} COMPLEX;

void print_COMPLEX(COMPLEX a) { printf("%d+%di", a.real, a.imag); }

COMPLEX fn1(COMPLEX a, COMPLEX b) {
    COMPLEX result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;
    return result;
}

void fn2(COMPLEX a, COMPLEX b, COMPLEX *result) {
    result->real = a.real * b.real - a.imag * b.imag;
    result->imag = a.real * b.imag + a.imag * b.real;
}

int main() {
    COMPLEX a, b;
    scanf("%d %d %d %d", &a.real, &a.imag, &b.real, &b.imag);
    COMPLEX result_1 = fn1(a, b);

    // fn1
    printf("fn1:\n");
    print_COMPLEX(result_1);
    printf("\n");

    // fn2
    COMPLEX result_2;
    fn2(a, b, &result_2);

    printf("fn2:\n");
    print_COMPLEX(result_2);
    printf("\n");
    return 0;
}