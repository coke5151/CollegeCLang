// 小賴的期中作業2022篇第二次期中考(矩陣乘法)
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, m1, n2, m2;
    scanf("%d %d %d %d", &n1, &m1, &n2, &m2);
    int mx1[n1][m1];
    int mx2[n2][m2];
    int ans[n1][m2];
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m1; j++) {
            scanf("%d", &mx1[i][j]);
        }
    }
    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < m2; j++) {
            scanf("%d", &mx2[i][j]);
        }
    }
    // 答案歸零
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; i++) {
            ans[i][j] = 0;
        }
    }
    // 乘法
    int mx1_m = 0;
    int mx2_n = 0;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            while (mx1_m < m1 && mx2_n < n2) {
                ans[i][j] += mx1[i][mx1_m] * mx2[j][mx2_n];
                mx1_m++;
                mx2_n++;
            }
        }
    }
    // 輸出
    int first_print = 1;
    for (int i = 0; i < n1; i++) {
        first_print = 1;
        for (int j = 0; j < m2; j++) {
            if (first_print) {
                printf("%d", ans[i][j]);
                first_print = 0;
            } else {
                printf(" %d", ans[i][j]);
            }
        }
    }
    return 0;
}