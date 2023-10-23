// a004. 文文的求婚
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0) {
            printf("閏年\n");
        } else {
            printf("平年\n");
        }
    }
    return 0;
}