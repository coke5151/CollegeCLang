// 多項式(2)

#include <stdio.h>
#include <stdlib.h>

int g(int x, int i) { // 題目要求為遞迴
    // code here
    if (i == 0) {
        return 1;
    } else {
        return x * g(x, i - 1);
    }
};

int f(int c[], int x, int n) {
    // code here
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += c[i] * g(x, i);
    }
    return sum;
};

int main() {
    int n, x;
    scanf("%d", &n);
    int arr[n];
    for (int i = n - 1; i >= 0; i--) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    printf("%d", f(arr, x, n));
    return 0;
}