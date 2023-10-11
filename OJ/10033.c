// 數列的操作

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX(i, j) (i > j ? i : j)
#define MIN(i, j) (i > j ? j : i)

int cmp(const void *a, const void *b) { return (*(int *)a - *(int *)b); }

int main() {
    int n;
    double avg = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        avg += arr[i];
    }
    avg /= n;
    qsort(arr, n, sizeof(arr[0]), cmp);

    printf("%d %d\n%.2lf", arr[n - 2], arr[1], avg);
    return 0;
}