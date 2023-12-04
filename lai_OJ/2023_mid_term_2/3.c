// 小賴的期中作業2023篇第二次期中考(我要發大財)
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int p[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }
    int earn_max = 0;
    int buy_i = -1;
    int sell_i = -1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((p[j] - p[i]) > earn_max) {
                earn_max = p[j] - p[i];
                buy_i = i;
                sell_i = j;
            }
        }
    }
    if (earn_max != 0) {
        printf("%d %d", buy_i + 1, sell_i + 1);
    } else {
        printf("-1");
    }
    return 0;
}