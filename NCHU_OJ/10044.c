// DNA序列

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    char k;
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++) {
        scanf("%c", &k);
        if (k == 'A') {
            printf("T");
        } else if (k == 'T') {
            printf("A");
        } else if (k == 'C') {
            printf("G");
        } else if (k == 'G') {
            printf("C");
        }
    }
    return 0;
}