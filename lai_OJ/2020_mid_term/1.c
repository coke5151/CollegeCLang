// 小賴的期中作業2020篇(十六進位)
#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int n;
    scanf("%x", &n);
    // 0xabcd1234
    unsigned int new_cd = (0x00FF0000 & n) >> 8;
    unsigned int new_12 = (0x0000FF00 & n) << 8;
    n = (0xFF0000FF & n);
    n = (new_cd | new_12 | n);
    printf("0x%x\n", n);
    // binary
    int bin[32] = {0};
    for (int i = 31; i >= 0; i--) {
        bin[i] = n % 2;
        n /= 2;
    }
    int printf_from_i = 0;
    // 找到第一個不為 0 的位
    while (bin[printf_from_i] == 0) {
        printf_from_i++;
    }
    for (int i = printf_from_i; i < 32; i++) {
        printf("%d", bin[i]);
    }
    return 0;
}