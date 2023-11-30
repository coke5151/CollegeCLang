// 最大的數
#include <stdio.h>
#include <stdlib.h>

#define MAX(i, j) (i > j ? i : j)

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", MAX(a, MAX(b, c)));
    return 0;
}