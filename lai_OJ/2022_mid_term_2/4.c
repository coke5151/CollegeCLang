// 小賴的期中作業2022篇第二次期中考(陣列合併)
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int arr[], int n) {
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int n, m;
    scanf("%d %d\n", &n, &m);
    int arr[n + m];
    for (int i = 0; i < (n + m); i++) {
        scanf("%d", &arr[i]);
    }
    bubble_sort(arr, (n + m));
    for (int i = 0; i < (n + m); i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}