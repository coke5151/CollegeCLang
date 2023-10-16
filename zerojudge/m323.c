// m323. 小賴的其中作業(交易分析)
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX(i, j) (i > j ? i : j)

int main() {
    int n;
    scanf("%d", &n);
    int prices[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    int mx = 0, counter = 0;
    int buyprice;
    bool holding = false;

    for (int head = 0; head <= n - 1; head++) {
        counter = 0;
        for (int i = head; i <= head; i++) {
            if (!holding) {
                buyprice = prices[i];
                holding = true;
            } else {
                if (prices[i] > buyprice) {
                    counter += (prices[i] - buyprice);
                    mx = MAX(mx, counter);
                    holding = false;
                }
            }
        }
    }
    printf("%d", mx * 1000);
    return 0;
}