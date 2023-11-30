// 小賴的期中作業2022篇第二次期中考(兩津流倍倍儲蓄法)
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d", (int)(n * pow(2, m - 1)));
    return 0;
}