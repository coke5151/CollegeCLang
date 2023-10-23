// a003. 兩光法師占卜術
#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, d, s;
    scanf("%d %d", &m, &d);
    s = (m * 2 + d) % 3;
    if (s == 0) {
        printf("普通");
    } else if (s == 1) {
        printf("吉");
    } else { // s == 2
        printf("大吉");
    }
    return 0;
}