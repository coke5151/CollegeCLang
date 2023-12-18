// Max and Min value
#include <stdio.h>
#define N 10
void max_min(int a[], int n, int *max, int *min) {
    int *p;
    *max = *a;
    *min = *a;
    for (p = a + 1; p < a + n; p++) {
        if (*p > *max) {
            *max = *p;
        } else if (*p < *min) {
            *min = *p;
        }
    }
}
int main() {
    int b[N], *p, max, min;
    printf("Enter %d numbers: ", N);
    for (p = b; p < b + N; p++)
        scanf("%d", p);

    max_min(b, N, &max, &min);
    printf("Largest: %d\n", max);
    printf("Min: %d\n", min);
    return 0;
}