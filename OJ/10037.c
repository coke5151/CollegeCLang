// 新-費式數列

#include <stdio.h>
#include <stdlib.h>

int fei(int n) {
    if (n == 1 || n == 2) {
        return 1;
    } else {
        return fei(n - 1) + fei(n - 2);
    }
}

int main() {
    int n;
    int ans = fei(4);
    scanf("%d", &n);
    printf("%d", fei(n) * fei(n + 1));
    return 0;
}