// 小賴的期中作業2023篇第二次期中考(串燒)
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    long long n, m, x, y;
    scanf("%lld %lld %lld %lld", &n, &m, &x, &y);
    long long A = (n - m * y) / (x - y);
    long long B = m - A;
    if (A >= 0 && B >= 0) {
        printf("%lld %lld", A, B);
    } else {
        printf("-1");
    }
    return 0;
}