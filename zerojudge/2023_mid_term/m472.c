// m472. 小賴的期中考(還我午餐時間！！)
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if (a >= b + c + d + e) {
        printf("%d", b + c + d + e);
    } else {
        printf("-1");
    }
    return 0;
}