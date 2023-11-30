// 神奇的數

#include <stdio.h>
#include <stdlib.h>

int main() {
    int m;
    scanf("%d", &m);
    if (m > 0 && m % 2 == 0 && (m > 10000 || m < 1000)) {
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}