// m331. 小賴的期中作業 2021 篇(位元運算)
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int n;
    scanf("%x", &n);
    unsigned int right = (n << 16);
    right /= pow(2, 16);
    unsigned int left = (n >> 16);
    // printf("%x, %x", left, right);

    unsigned int x, y; // x = (a+b), y = (a-b)
    y = right;
    x = left ^ right;
    unsigned int a = (x + y) / 2;
    unsigned int b = x - a;
    printf("%d %d", a, b);
    return 0;
}