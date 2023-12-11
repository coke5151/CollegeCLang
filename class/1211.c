/* Finds the largest and second largest elements in an array */
#include <stdio.h>
#define N 10
void max_sec(int a[], int n, int *max, int *sec) {
    int i;
    if (a[0] > a[1]) {
        *max = a[0];
        *sec = a[1];
    } else {
        *sec = a[0];
        *max = a[1];
    }
    for (i = 2; i < n; i++) {
        if (a[i] > *max) {
            *sec = *max;
            *max = a[i];
        } else if (a[i] > *sec) {
            *sec = a[i];
        }
    }
}
int main() {
    int b[N], i, big, sec_big;
    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &b[i]);

    max_sec(b, N, &big, &sec_big);
    printf("Largest: %d\n", big);
    printf("Second Largest: %d\n", sec_big);
    return 0;
}