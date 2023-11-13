// 交換BYTE
#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned int n;
    scanf("%x", &n);
    unsigned int a = n & 0x00FF0000;
    a >>= 8;
    unsigned int b = n & 0x0000FF00;
    b <<= 8;
    unsigned int c = n & 0xFF0000FF;
    printf("0x%x", a|b|c);

    return 0;
}