// m324. 小賴的期中作業(11的最大整數)
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int arr[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int zero = 0, one = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 0) {
            zero++;
        } else { // arr[i] == 1
            one++;
        }
    }
    if (one % 2 == 0) { // 偶數個 1 必有解：擠在最左邊
        bubble_sort(arr, n);
        for (int i = 0; i < n; i++) {
            printf("%d", arr[i]);
        }
    } else {                         // 奇數個 1
        if (one < 11 || zero < 10) { // 1 不到 11 個或 0 不到 10 個
            printf("-1");
        } else {
            while (one > 11) {
                printf("1");
                one--;
            }
            printf("101010101010101010101");
            zero -= 10;
            while (zero--) {
                printf("0");
            }
        }
    }

    return 0;
}