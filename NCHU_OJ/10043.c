// 找到第K大的數

#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) {
    if (n == 1) {
        return;
    }

    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(&arr[i], &arr[i + 1]);
            count++;
        }
    }

    if (count == 0) {
        return;
    }

    bubbleSort(arr, n - 1);
}

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    bubbleSort(arr, n);
    printf("%d", arr[n - k]);
    return 0;
}