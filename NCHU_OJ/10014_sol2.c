// 交換（簡單解法）

#include <stdio.h>
#include <stdlib.h>

int main() {
    char c[4];
    scanf("%c%c %c%c", &c[0], &c[1], &c[2], &c[3]);
    printf("%c%c", c[3], c[1]);
    return 0;
}