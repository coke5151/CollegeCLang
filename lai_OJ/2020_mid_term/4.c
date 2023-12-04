// 小賴的期中作業2020篇(最小的byte)
#include <stdio.h>
#include <stdlib.h>

#define MIN(i, j) (i < j ? i : j)

int main() {
    unsigned int n;
    scanf("%x", &n);
    unsigned int cleaner = 0x000000FF;
    unsigned int min = 0xFF;
    unsigned int temp;
    for (int i = 0; i < 4; i++) { // 四個 bytes
        temp = n & cleaner;
        temp >>= (i * 8);
        min = MIN(min, temp);
        cleaner <<= 8;
    }
    printf("%x", min);
    return 0;
}