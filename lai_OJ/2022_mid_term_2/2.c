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
        for (int j = 0; j < m2; j++) {
            ans[i][j] = 0;
        }
    }
    // 乘法
    int mx1_m = 0;
    int mx2_n = 0;
    for (int i = 0; i < n1; i++) {     // 0, 1
        for (int j = 0; j < m2; j++) { // 0, 1
            while (mx1_m < m1 && mx2_n < n2) {
                ans[i][j] += (mx1[i][mx1_m] * mx2[mx2_n][j]);
                mx1_m++;
                mx2_n++;
            }
            mx1_m = 0;
            mx2_n = 0;
        }
    }
    // 輸出
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}