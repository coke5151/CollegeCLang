// Search function
#include <stdio.h>
#define N 10
int search(const int a[], int n, int key) {
    int have_num = 0;
    int *p;
    for (p = a; p < a + n; p++) {
        if ((*p) == key) {
            have_num = 1;
            break;
        }
    }
    return have_num;
}
int main() {
    int b[N], *p, key;
    printf("Enter %d numbers: ", N);
    for (p = b; p < b + N; p++)
        scanf("%d", p);
    printf("Enter the key number: ");
    scanf("%d", &key);
    int ans = search(b, N, key);
    if (ans) {
        printf("the search function return 1");
    } else {
        printf("the search function return 0");
    }
    return 0;
}