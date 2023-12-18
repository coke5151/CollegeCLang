// Max and Second large value
#include <stdio.h>
#define N 10
void max_sec(int a[], int n, int *max, int *sec) {
    int *p;
    if (*a > *(a + 1)) {
        *max = *a;
        *sec = *(a + 1);
    } else {
        *sec = *a;
        *max = *(a + 1);
    }
    for (p = a + 2; p < a + n; p++) {
        if (*p > *max) {
            *sec = *max;
            *max = *p;
        } else if (*p > *sec) {
            *sec = *p;
        }
    }
}
int main() {
    int b[N], *p, big, sec_big;
    printf("Enter %d numbers: ", N);
    for (p = b; p < b + N; p++)
        scanf("%d", p);

    max_sec(b, N, &big, &sec_big);
    printf("Largest: %d\n", big);
    printf("Second Largest: %d\n", sec_big);
    return 0;
}