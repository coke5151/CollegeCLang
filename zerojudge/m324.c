// m324. 小賴的期中作業(11的最大整數)

#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool isfactor(int arr[], int n) {
    int odd = 0, even = 0;
    int minus = 0;
    for (int i = 0; i < n; i += 2) {
        odd += (arr[i] * pow(2, n - 1 - i));
    }
    for (int i = 1; i < n; i += 2) {
        even += (arr[i] * pow(2, n - 1 - i));
    }
    minus = abs(odd - even);
    return (minus % 11 == 0);
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int arr[], int n) {
    for (int j = n - 2; j >= 0; j--) {
        for (int i = 0; i <= j; i++) {
            if (arr[i] < arr[i + 1]) {
                swap(&arr[i], &arr[i + 1]);
            }
        }
    }
}



int main() {
    int n;
    scanf("%d", &n);
    int input[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &input[i]);
    }

    bubble_sort(input, n);
    // for (int i = 0; i < n; i++) {
    //     printf("%d", input[i]);
    // }

    return 0;
}