// 找最大值(指標版)
#include <stdio.h>

#define MAX(i, j) (i > j ? i : j)
#define MIN(i, j) (i < j ? i : j)

int max(int *iptr[], int n) {
    int mx = *iptr[0];
    for (int i = 1; i < n; i++) {
        mx = MAX(mx, *iptr[i]);
    }
    return mx;
}

int main() {
    int n, i;
    int array[100];
    int *iptr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &(array[i]));
        iptr[i] = &(array[i]);
    }
    printf("%d\n", max(iptr, n));
    return 0;
}