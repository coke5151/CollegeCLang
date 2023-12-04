// 小賴的期中作業2020篇(到底有幾位)
#include <stdio.h>
#include <stdlib.h>

int main() {
    int counter = 0;
    unsigned int n;
    scanf("%d", &n);
    while (n > 0) {
        counter++;
        n /= 10;
    }
    printf("%d", counter);
    return 0;
}