// a005. Eva 的回家作業
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int arr[5];
    int dis;
    int gero;
    bool arti = true;
    bool first_print = true;
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]);
        dis = arr[1] - arr[0];
        arti = true;
        for (int i = 2; i <= 3; i++) {
            if (arr[i] - arr[i - 1] != dis) {
                arti = false;
                gero = arr[i] / arr[i - 1];
                break;
            }
        }
        if (arti) {
            arr[4] = arr[3] + dis;
        } else {
            arr[4] = arr[3] * gero;
        }
        first_print = true;
        for (int i = 0; i < 5; i++) {
            if (first_print) {
                printf("%d", arr[i]);
                first_print = false;
            } else {
                printf(" %d", arr[i]);
            }
        }
        printf("\n");
    }
    return 0;
}