#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned short n, m = 0x8000, i = 0;
    scanf("%hx", &n);
    for (i = 0; i < 16; i++, m >>= 1) {
        printf("%d", n & m ? 1 : 0);
    }
    return 0;
}