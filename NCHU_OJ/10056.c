// 西洋棋
#include <stdio.h>
#include <stdlib.h>

#define MAX(i, j) (i > j ? i : j)

int get_value(int *arr[], int n, int m, int init_i, int init_j) {
    // 中心
    int sum = arr[init_i][init_j];

    // 左上
    int now_i = init_i, now_j = init_j;
    while (1) {
        now_i--;
        now_j--;
        if (1 <= now_i && now_i <= n && 1 <= now_j && now_j <= m) {
            sum += arr[now_i][now_j];
        } else {
            break;
        }
    }

    // 右上
    now_i = init_i;
    now_j = init_j;
    while (1) {
        now_i++;
        now_j--;
        if (1 <= now_i && now_i <= n && 1 <= now_j && now_j <= m) {
            sum += arr[now_i][now_j];
        } else {
            break;
        }
    }

    // 左下
    now_i = init_i;
    now_j = init_j;
    while (1) {
        now_i--;
        now_j++;
        if (1 <= now_i && now_i <= n && 1 <= now_j && now_j <= m) {
            sum += arr[now_i][now_j];
        } else {
            break;
        }
    }

    // 右下
    now_i = init_i;
    now_j = init_j;
    while (1) {
        now_i++;
        now_j++;
        if (1 <= now_i && now_i <= n && 1 <= now_j && now_j <= m) {
            sum += arr[now_i][now_j];
        } else {
            break;
        }
    }
    return sum;
}

int main() {
    int n, m;
    scanf("%d %d\n", &n, &m);
    int map[n + 1][m + 1];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            scanf("%d", &map[i][j]);
        }
    }

    // 為了傳遞二維陣列，使用指標陣列
    int *index[n + 1];
    for (int i = 1; i <= n; i++) {
        index[i] = map[i];
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            ans = MAX(ans, get_value(index, n, m, i, j));
        }
    }
    printf("%d", ans);
    return 0;
}