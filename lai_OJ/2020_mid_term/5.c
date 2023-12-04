// 小賴的期中作業2020篇(分數的運算)
#include <stdio.h>
#include <stdlib.h>

typedef struct frac {
    int up;
    int down;
} frac;

int gcd(int a, int b) {
    if (a % b == 0) {
        return b;
    }
    return gcd(b, a % b);
}

int main() {
    frac a, b, ans;
    scanf("%d/%d %d/%d", &a.up, &a.down, &b.up, &b.down);
    ans.down = a.down * b.down;
    ans.up = a.up * b.down + b.up * a.down;
    int div = gcd(ans.up, ans.down);
    ans.up /= div;
    ans.down /= div;
    printf("%d/%d", ans.up, ans.down);
    return 0;
}