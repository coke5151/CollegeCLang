// 小賴的期中作業2022篇第二次期中考(優勢)
#include <stdio.h>
#include <stdlib.h>

#define MAX(i, j) (i > j ? i : j)

int main() {
    int n;
    scanf("%d", &n);
    int team[n];
    int max[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &team[i]);
    }
    for (int i = 0; i < n; i++) {
        max[i] = 0;
    }
    // 找出第 i 個以外隊伍最大的
    for (int i = 0; i < n; i++) {     // 第 i 個隊伍
        for (int j = 0; j < n; j++) { // 其它隊伍
            if (i != j) {             // 要 i 以外才算其它隊伍
                max[i] = MAX(max[i], team[j]);
            }
        }
    }
    // 輸出答案
    for (int i = 0; i < n; i++) {
        printf("%d ", team[i] - max[i]);
    }

    return 0;
}