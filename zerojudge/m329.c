// m329. 小賴的期中作業2021篇 複數乘法
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct com {
    long long real;
    long long imaginary;
} com;

long long gcd(long long a, long long b) {
    long long t;
    while (b != 0) {
        t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() {
    com a, b, result;
    long long under, max_gcd;
    scanf("%lld %lld %lld %lld", &a.real, &a.imaginary, &b.real, &b.imaginary);
    result.real = ((a.real * b.real) + (a.imaginary * b.imaginary));
    result.imaginary = ((a.imaginary * b.real) - (a.real * b.imaginary));
    under = pow(b.real, 2) + pow(b.imaginary, 2);

    max_gcd = gcd(gcd(result.real, result.imaginary), under);

    result.real /= max_gcd;
    result.imaginary /= max_gcd;
    under /= max_gcd;

    printf("%lld %lld %lld", result.real, result.imaginary, under);
    return 0;
}