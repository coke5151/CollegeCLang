// 泡沫排序

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int temp;
    bool firstprint = true;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j <= i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (firstprint) {
            printf("%d", arr[i]);
            firstprint = false;
        } else {
            printf(" %d", arr[i]);
        }
    }
    return 0;
}