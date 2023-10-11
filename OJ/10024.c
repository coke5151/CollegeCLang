// 你比花瓣還美

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int ans = 0, sum = 0;
    int average = 0, count = 0;
    bool isint = true;
    scanf("%d", &n);
    int flowers[n + 1];
    for (int i = 1; i <= n; i++) {
        scanf("%d", &flowers[i]);
    }

    ans = n; // 每一朵花的獨拍照都會滿足計數
    for (int gap = 1; gap < n; gap++) { // 從兩朵花以上的照片開始計，最多 n 朵
        average = 0;
        sum = 0;

        // 第一次計算平均
        for (int i = 1; i <= 1 + gap; i++) {
            sum += flowers[i];
        }
        if (sum % (gap + 1) != 0) { // 花瓣不整除
            isint = false;
        } else { // 花瓣整除
            isint = true;
            average = sum / (gap + 1);
        }
        // 第一區間計數
        if (isint) {
            for (int i = 1; i <= 1 + gap; i++) {
                if (flowers[i] == average) {
                    ans++;
                    break;
                }
            }
        }
        // 移動區間
        for (int flag = 2; flag + gap <= n; flag++) {
            // 計算新平均
            sum -= flowers[flag - 1];
            sum += flowers[flag + gap];

            if (sum % (gap + 1) != 0) { // 花瓣不整除
                isint = false;
            } else { // 花瓣整除
                isint = true;
                average = sum / (gap + 1);
            }
            if (isint) {
                for (int i = flag; i <= flag + gap; i++) {
                    if (flowers[i] == average) {
                        ans++;
                        break;
                    }
                }
            }
        }
    }
    printf("%d", ans);
    return 0;
}