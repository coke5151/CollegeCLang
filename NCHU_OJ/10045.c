// 爆爆王

#include <stdio.h>

int n;                                         // 宣告全域變數 n
int calMaxPointFromMap(int ans[n + 1][n + 1]); // 宣告函式

#define MAX(i, j) ((i > j) ? i : j);

int main() {
    int i, j, Max_point;
    scanf("%d", &n);
    int ans[n + 1][n + 1];
    for (i = 0; i <= n; i++)
        for (j = 0; j <= n; j++)
            ans[i][j] = 0; // 初始化陣列

    for (i = 1; i <= n; i++) // index 從 1 開始
        for (j = 1; j <= n; j++)
            scanf("%d", &ans[i][j]); // 讀入地圖
    Max_point = calMaxPointFromMap(ans);
    printf("%d", Max_point);
}

int calMaxPointFromMap(int ans[n + 1][n + 1]) {
    // code here
    int mx = 0, counter = 0;
    int dict[2] = {1, -1};
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // printf("處理 i = %d, j = %d:\n", i, j);
            counter = ans[i][j] * 2; // 當前格子 * 2
            // printf("\tans[%d][%d]=%d\n", i, j, ans[i][j]);
            // printf("\t處理上下左右…\n");
            // printf("\t\tcounter = %d\n", counter);
            for (int ud = 0; ud < 2; ud++) { // up and down
                if (1 <= i + dict[ud] && i + dict[ud] <= n) {
                    counter += ans[i + dict[ud]][j];
                }
            }
            for (int lr = 0; lr < 2; lr++) { // left and right
                if (1 <= j + dict[lr] && j + dict[lr] <= n) {
                    counter += ans[i][j + dict[lr]];
                }
            }
            // printf("\t\tcounter = %d\n", counter);

            mx = MAX(mx, counter);
            // printf("此輪的 counter 最終 = %d\n", counter);
            // printf("目前的 mx = %d\n", mx);
        }
    }
    return mx;
}