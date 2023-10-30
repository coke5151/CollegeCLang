#include <stdio.h>
#include <stdlib.h>

int main() {
    long long n;
    scanf("%lld", &n);
    while (n > 0) {
        printf("%lld", n % 10);
        n /= 10;
    }
    return 0;
}