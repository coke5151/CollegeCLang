// 小賴的期中作業2020篇第二次期中考(又是bubble sort)
// 根本不能只用 bubble sort 吧
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int a[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (a[j] < a[j + 1]) {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}

void move_element(int a[], int from_i, int end_i, int move_step) {
    for (int i = end_i; i >= from_i; i--) {
        a[i + move_step] = a[i];
    }
}

void insert_one_element(int a[], int n, int ele) {
    for (int i = 0; i < n; i++) {
        if (a[i] < ele) {
            move_element(a, i, n - 1, 1);
            a[i] = ele;
            break;
        } else if (i == n - 1) {
            a[i] = ele;
        }
    }
}

void print_arr(int a[], int n) {
    int first_print = 1;
    for (int i = 0; i < n; i++) {
        if (first_print) {
            printf("%d", a[i]);
            first_print = 0;
        } else {
            printf(" %d", a[i]);
        }
    }
}

int main() {
    int n, m, temp;
    int a[1005];
    scanf("%d %d\n", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    // 初始
    bubble_sort(a, n);
    print_arr(a, n);
    printf("\n");

    // 之後每個操作
    while (m--) {
        n++;
        scanf("%d", &temp);
        insert_one_element(a, n, temp);
        print_arr(a, n);
        printf("\n");
    }
    return 0;
}