// An Easy Problem!
#include <stdio.h>
#include <stdlib.h>

int main() {
    char c;
    while (1) {
        scanf("%c", &c);
        if ('0' <= c && c <= '9') {
            printf("%d\n", c - '0' + 1);
        } else if ('a' <= c && c <= 'a') {
            printf("%d\n", c - 'a' + 10 + 1);
        } else if ('A' <= c && c <= 'A') {
            printf("%d\n", c - 'A' + 36 + 1);
        }
        scanf("%*[\n]");
    }
    return 0;
}