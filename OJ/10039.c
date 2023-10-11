// 生命靈數

#include <stdio.h>
#include <stdlib.h>

int eachsum(int n) {
    int sum = 0;
    while (n != 0) {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

int lifenum(int n) {
    if (n / 10 != 0) {
        return lifenum(eachsum(n));
    } else {
        return n;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", lifenum(n));
    return 0;
}