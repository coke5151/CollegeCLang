// 小馬的減肥計畫

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX(i, j) (i > j ? i : j)

int main() {
    bool debug_mode = false;
    int n, d;
    scanf("%d %d\n", &n, &d);
    int input[n + 1];
    for (int i = 1; i <= n; i++) {
        scanf("%d", &input[i]);
    }

    int size = 0;
    int counter = 0;
    int j = 0;
    int x = 0, y = 0;
    int mx = 0;

    if (debug_mode) {
        printf("歡迎使用 debug_mode，將會印出運作過程！\n");
        printf("目前的參數：\n\tn=%d, d=%d, size=%d, counter=%d, j=%d, x=%d, "
               "y=%d, "
               "mx=%d\n",
               n, d, size, counter, j, x, y, mx);
        printf("input[] 的內容：\n\t");
        for (int i = 1; i <= n; i++) {
            printf("%d, ", input[i]);
        }
        printf("\n");
    }

    for (int flag = 1; flag <= n; flag++) { // 原始陣列的第 flag 個當頭
        // 開始整理山坡
        size = 1;
        for (int i = flag + 1; i <= n; i++) { // 計算 hill[] 需要開多大
            if ((input[i - 1] * input[i]) < 0) {
                size++;
            }
        }
        int hill[size + 1]; // 多開一格，直接使用 1~n 方便思考
        counter = 1;
        j = 1;
        for (int i = flag + 1; i <= n; i++) {    // 開始整理 hill
            if ((input[i] * input[i - 1]) < 0) { // 上下坡轉換
                if (input[i - 1] < 0) {
                    counter = -counter; // 下坡的話存負數，方便之後區分
                }
                hill[j] = counter;
                counter = 1;
                j++;
                if (i == n) { // 結尾一定要存
                    if (input[i] < 0) {
                        counter = -counter; // 下坡的話存負數，方便之後區分
                    }
                    hill[j] = counter;
                }
            } else { // 一直上坡 or 一直下坡
                counter++;
                if (i == n) { // 結尾一定要存
                    if (input[i] < 0) {
                        counter = -counter; // 下坡的話存負數，方便之後區分
                    }
                    hill[j] = counter;
                }
            }
        }

        if (flag == n) { // 排頭就是結尾
            hill[1] = input[n];
        }

        if (debug_mode) {
            printf("flag = %d:\n", flag);
            printf("\t計算出 size = %d, hill[] 開 size + 1 = %d 個位置\n", size,
                   size + 1);
            printf("\thill[] 的內容：\n\t\t");
            for (int i = 1; i <= size; i++) {
                printf("%d, ", hill[i]);
            }
            printf("\n");
        }
        // 整理完畢

        // 開始檢驗 flag 當頭的最長路段
        if (debug_mode) {
            printf("\t開始檢驗 flag 開頭的路段有沒有符合\n");
        }
        counter = 0;
        for (int i = 2; i <= size; i++) {
            if (hill[1] > 0) {     // 開頭上坡
                if (hill[i] < 0) { // 目前這個是上坡
                    x = hill[i - 1];
                    y = -hill[i]; // 取正
                    if (x - d <= y && y <= x + d) {
                        counter += (x + y);
                        mx = MAX(mx, counter);
                        if (debug_mode) {
                            printf("\t目前 i = %d, x = %d, y = %d, counter = "
                                   "%d, mx = %d\n",
                                   i, x, y, counter, mx);
                        }
                    } else { // 不合條件
                        if (debug_mode) {
                            printf("\t不合條件，跳出！\n");
                        }
                        break;
                    }
                } else { // 目前這個是下坡
                         // continue
                }

            } else { // hill[1] < 0 下坡
                if (debug_mode) {
                    printf("\t開頭不能是下坡，跳出！\n");
                }

                break; // 開頭不能是下坡
            }
        }
    }
    if (debug_mode) {
        printf("\n\n檢驗完畢，mx = %d\n", mx);
    } else {
        printf("%d", mx);
    }

    return 0;
}