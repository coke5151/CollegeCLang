// 小賴的期中作業2023篇第二次期中考(我不會算數學)
#include <stdio.h>
#include <stdlib.h>

long long pwr(long long a, long long n) {
    if (n == 0) {
        return 1;
    } else {
        return a * pwr(a, n - 1);
    }
}

int main() {
    long long n;
    scanf("%lld", &n);
    long long arr[n];
    for (long long i = n - 1; i >= 0; i--) {
        scanf("%lld", &arr[i]);
    }
    long long a;
    long long ans = 0;
    scanf("%lld", &a);
    for (long long i = 0; i < n; i++) {
        ans += (arr[i] * pwr(a, i));
    }
    printf("%lld", ans);
    return 0;
}