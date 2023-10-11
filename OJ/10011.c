// 冪

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, r, counter = 0;
    bool first_print = true;
    scanf("%d", &n);
    while (n > 0) {
        r = n % 2;
        n /= 2;
        if (r == 1) {
            if (first_print) {
                printf("%d", counter);
                first_print = false;
            } else // first_print == false
                printf(" %d", counter);
        }
        counter++;
    }
    return 0;
}