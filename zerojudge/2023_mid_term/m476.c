// m476. 小賴的期中考(反轉術式)
#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int a;
    scanf("%x", &a);
    printf("%08X", a ^ 0x00FFFF00);
    return 0;
}