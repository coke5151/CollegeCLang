// 超級電腦

#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 0;
    unsigned int n;
    scanf("%x", &n);

    int bin[32] = {0};
    for (int i = 32 - 1; i >= 0; i--) {
        bin[i] = n % 2;
        n /= 2;
    }
    for (int i = 0; i < 32; i++) {
        printf("%c", ((bin[i] == 1) ? '*' : '-'));
    }
    return 0;
}