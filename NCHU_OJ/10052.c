// Unique elements
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int arr[], int n) {
    for (int j = n - 2; j >= 0; j--) {
        for (int i = 0; i <= j; i++) {
            if (arr[i] > arr[i + 1]) {
                swap(&arr[i], &arr[i + 1]);
            }
        }
    }
}

typedef struct number {
    int num;
    bool repeat;
} number;

int main() {
    int n;
    scanf("%d", &n);
    number arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i].num);
        arr[i].repeat = false;
        for (int j = 0; j < i; j++) {
            if (arr[j].num == arr[i].num) {
                arr[j].repeat = true;
                arr[i].repeat = true;
            }
        }
    }

    int num_of_ans = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i].repeat == false) {
            num_of_ans++;
        }
    }
    if (num_of_ans == 0) {
        printf("None");
    } else {
        int ans[num_of_ans];
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i].repeat == false) {
                ans[j] = arr[i].num;
                j++;
            }
        }

        bubble_sort(ans, num_of_ans);
        bool first_printf = true;
        for (int i = 0; i < num_of_ans; i++) {
            if (first_printf) {
                printf("%d", ans[i]);
                first_printf = false;
            } else {
                printf(" %d", ans[i]);
            }
        }
    }
    return 0;
}