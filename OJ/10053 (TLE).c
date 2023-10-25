// 聖主的減肥計畫
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int t;
    int n;
    int ans = 0;
    scanf("%d", &t);

    bool first_printf = true;
    while (t--) {
        ans = 0;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) { // 輸入
            scanf("%d", &arr[i]);
        }
        // 開始遍歷，尋找比自己小 1 的對調

        bool complete = false;
        while (!complete) {
            for (int i = 0; i < n; i++) { // i: 目前基準點
                for (int j = i + 1; j < n; j++) { // j: 從基準點一個一個往後看
                    if (arr[j] == arr[i] - 1) {
                        swap(&arr[j], &arr[i]);
                        ans += 2;
                        // 兩層一起 break;
                        i = n;
                        break;
                    }
                }
                if (i == n - 1) { // 能到這裡代表排完了
                    complete = true;
                }
            }
        }
        if (first_printf) {
            printf("%d", ans);
            first_printf = false;
        } else {
            printf("\n%d", ans);
        }
    }
    return 0;
}