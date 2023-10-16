#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool isPrime(int n) {
    bool prime = true;
    for (int i = n - 1; i >= 2; i--) {
        if (n % i == 0) {
            prime = false;
            break;
        }
    }
    return prime;
}

int main() {
    char c;
    int n, m;
    scanf("%c%d", &c, &n);
    if (c == 'A' || c == 'a') {
        m = 147;
    } else if (c == 'B' || c == 'b') {
        m = 258;
    } else if (c == 'C' || c == 'c') {
        m = 369;
    }
    if (isPrime(m + n)) {
        printf("Valid");
    } else {
        printf("Invalid");
    }

    return 0;
}