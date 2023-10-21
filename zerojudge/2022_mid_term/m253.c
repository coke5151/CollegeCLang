// m253. 小賴的期中作業-(各位數字和)
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, sum = 0, ans = 0;
    scanf("%d %d", &a, &b);
    sum = a + b;
    while (sum != 0) {
        ans += sum % 10;
        sum /= 10;
    }
    printf("%d", ans);
    return 0;
}