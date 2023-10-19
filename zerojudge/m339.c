// m339. 小賴的期中作業2021篇(學生證 啊啊啊啊！！)
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int sum_of_all_digits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

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
    int bk = 0;
    scanf("%c%d", &c, &n);
    if (c == 'A' || c == 'a') {
        m = 147;
    } else if (c == 'B' || c == 'b') {
        m = 258;
    } else if (c == 'C' || c == 'c') {
        m = 369;
    } else {
        bk = 1;
    }
    if (bk == 0 && isPrime(sum_of_all_digits(m) + sum_of_all_digits(n))) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}