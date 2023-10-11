// 迴文判斷

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int counter = 0, temp = 0;
    bool isloop = true;
    scanf("%d", &n);

    // 計算長度
    temp = n;
    while (temp != 0) {
        counter++;
        temp /= 10;
    }
    temp = n;
    int num[counter];
    for (int i = 0; i < counter; i++) {
        num[i] = temp % 10;
        temp /= 10;
    }
    for (int i = 0; i < counter / 2; i++) {
        if (num[i] == num[counter - i - 1]) {
            isloop = true;
        } else { // 左右不對稱
            isloop = false;
            break;
        }
    }
    if (isloop) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}