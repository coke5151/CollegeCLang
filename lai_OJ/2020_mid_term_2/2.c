// 小賴的期中作業2020篇第二次期中考(陣列來囉)
#include <stdio.h>

#define MAX(i, j) (i > j ? i : j)

int main() {
    long long x, y, temp, ans;
    int first = 1;
    scanf("%lld %lld\n", &x, &y);
    for (long long i = 0; i < x; i++) {
        for (long long j = 0; j < y; j++) {
            scanf("%lld", &temp);
            if (first) {
                ans = temp;
                first = 0;
            } else {
                ans = MAX(ans, temp);
            }
        }
    }
    printf("%lld", ans);
    return 0;
}