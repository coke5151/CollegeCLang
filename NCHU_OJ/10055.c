// 字串運動會
#include <stdio.h>
#include <stdlib.h>

#define MIN(i, j) (i < j ? i : j)

int main() {
    int n, m;
    char temp;
    scanf("%d %d\n", &n, &m);
    char arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%c", &arr[i][j]);
        }
        scanf("%c", &temp);
    }

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         printf("%c", arr[i][j]);
    //         // printf("%d, %d", i,j);
    //     }
    //     printf("\n");
    // }

    // 計算隨便一組總距離並宣告 mn
    int mn = 0;
    for (int j = 0; j < m; j++) {
        mn += abs(arr[0][j] - arr[1][j]);
    }

    // 計算總距離取最小值
    int counter;
    for (int i1 = 0; i1 < n; i1++) {
        for (int i2 = 0; i2 < n; i2++) {
            if (i1 == i2) { // 同一個字串
                break;
            }
            counter = 0;
            for (int j = 0; j < m; j++) {
                counter += abs(arr[i1][j] - arr[i2][j]);
            }
            mn = MIN(mn, counter);
        }
    }
    printf("%d", mn);
    return 0;
}