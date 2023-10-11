// 賣油翁（我覺得這題題目敘述有問題）

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, x = 0;
    scanf("%d", &n);
    if (n <= 0) {
        x = -100;
    }
    if (n > 0 && n % 3 == 0) {
        x += 3;
    }
    if (n > 0 && n % 5 == 0) {
        x += 5;
    }

    if (100 <= n && n <= 200) {
        x += 50;
    } else if (n > 0) {
        x -= 50;
    }
    printf("%d", x);
    return 0;
}