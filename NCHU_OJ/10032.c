// 數列倒轉

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    bool firstprint = true;
    bool firstscan = true;

    scanf("%d", &n);
    int arr[n];
    for (int i = n - 1; i >= 0; i--) {
        if (firstscan) {
            scanf("%d", &arr[i]);
            firstscan = false;
        } else {
            scanf(" %d", &arr[i]);
        }
    }
    for (int i = 0; i < n; i++) {
        if (firstprint) {
            printf("%d", arr[i]);
            firstprint = false;
        } else {
            printf(" %d", arr[i]);
        }
    }
    return 0;
}