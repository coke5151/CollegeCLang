// 閏年問題

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    bool isleap;
    scanf("%d", &n);

    if (n % 4 != 0) {
        isleap = false;
    } else if (n % 100 != 0) { // n%4 == 0
        isleap = true;
    } else if (n % 400 != 0) { // n%100 == 0
        isleap = false;
    } else { // n%400 == 0
        isleap = true;
    }

    if (isleap) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}