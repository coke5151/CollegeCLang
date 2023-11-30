// 小賴的期中作業2021篇第二次期中考(真bubble sort)
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int a[], int n) {
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            if (a[j] > a[j + 1]) {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}

int main() {
    int m;
    scanf("%d\n", &m);
    int input[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &input[i]);
    }
    bubble_sort(input, m);
    int first_print = 1;
    for (int i = 0; i < m; i++) {
        if (first_print) {
            printf("%d", input[i]);
            first_print = 0;
        } else {
            printf(" %d", input[i]);
        }
    }
    return 0;
}