// 2的次方
// https://davidhsu666.com/archives/ispowerby2/
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
    long long n;
    while (scanf("%lld", &n) != EOF) {
        if (n <= 0 || (n & (n - 1)) != 0) {
            printf("No\n");
        } else {
            printf("Yes\n");
        }
    }
    return 0;
}
