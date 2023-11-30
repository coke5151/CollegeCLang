// m323. 小賴的其中作業(交易分析)
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX(i, j) (i > j ? i : j)

int main() {
    long long n;
    long long sum = 0;
    long long last_low_price = 0;

    scanf("%lld", &n);
    long long price[n];
    for (long long i = 0; i < n; i++) {
        scanf("%lld", &price[i]);
    }

    bool holding = false;
    last_low_price = price[0];
    for (long long i = 1; i < n; i++) {
        if (price[i] < price[i - 1]) {
            if (holding) {
                sum += (price[i - 1] - last_low_price);
                holding = false;
            }
            last_low_price = price[i];
        } else {
            holding = true;
        }

        if (i == (n - 1) && price[i] > price[i - 1]) { // 到了最後
            if (holding) {
                sum += (price[i] - last_low_price);
            } else {
                sum += (price[i] - price[i - 1]);
            }
        }
    }
    printf("%lld", sum * 1000);

    return 0;
}