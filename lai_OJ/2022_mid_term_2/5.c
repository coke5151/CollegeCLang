// 小賴的期中作業2022篇第二次期中考(bito)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX(i, j) (i > j ? i : j)

int main() {
    int n, m;
    scanf("%d %d\n", &n, &m);
    int bit1[n + m + 1], bit2[n + m + 1];
    int ans[n + m + 1];
    // 輸入
    char input1[n + 1], input2[m + 1];
    scanf("%s%s", input1, input2);
    // 歸零初始化
    for (int i = 0; i < (n + m + 1); i++) {
        bit1[i] = 0;
        bit2[i] = 0;
    }
    for (int i = 0; i < (n + m + 1); i++) {
        ans[i] = 0;
    }
    // 把陣列轉數字
    for (int i = 0; i < n; i++) {
        bit1[i] = input1[n - 1 - i] - '0';
    }
    for (int i = 0; i < m; i++) {
        bit2[i] = input2[m - 1 - i] - '0';
    }
    // 開始計算
    int to_next = 0; // 要進位的暫存值
    for (int i = 0; i < (n + m + 1); i++) {
        ans[i] = (bit1[i] + bit2[i] + to_next);
        to_next = 0;
        if (ans[i] > 1) { // 有需要進位的值
            to_next = ans[i] / 2;
            ans[i] = ans[i] % 2;
        }
    }
    int start_i = (n + m);
    while (ans[start_i] == 0) {
        start_i--;
    }
    for (int i = start_i; i >= 0; i--) {
        printf("%d", ans[i]);
    }
    return 0;
}