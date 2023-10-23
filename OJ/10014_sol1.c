// 交換
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int a, b, result = 0;
    scanf("%x %x", &a, &b);
    int a_bin[8], b_bin[8], result_bin[8];
    int i = 0, j = 0;
    while (a != 0) {
        a_bin[i] = a % 2;
        a /= 2;
        i++;
    }
    while (b != 0) {
        b_bin[j] = b % 2;
        b /= 2;
        j++;
    }
    for (int i = 0; i < 4; i++) {
        result_bin[i] = a_bin[i];
        result_bin[i + 4] = b_bin[i];
    }
    // for (int i = 0; i < 8; i++) {
    //   printf("%d", result_bin[i]);
    // }
    for (int i = 0; i < 8; i++) {
        result += result_bin[i] * pow(2, i);
    }
    printf("%x", result);
    return 0;
}