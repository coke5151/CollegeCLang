// 小賴的期中作業2022篇第二次期中考(bubble sort)
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int special_bubble_sort(int a[], int n) {
    int counter = 0;
    bool this_time_no_swap;
    for (int i = n - 2; i >= 0; i--) {
        this_time_no_swap = true;
        for (int j = 0; j <= i; j++) {
            if (a[j] > a[j + 1]) {
                swap(&a[j], &a[j + 1]);
                this_time_no_swap = false;
                counter++;
            } else {
                counter++;
            }
        }
        if (this_time_no_swap) {
            break;
        }
    }
    return counter;
}

int main() {
    int m;
    scanf("%d", &m);
    int arr[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr[i]);
    }
    int counter = special_bubble_sort(arr, m);
    printf("%d\n", counter);
    for (int i = 0; i < m; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}