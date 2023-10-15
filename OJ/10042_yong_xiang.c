#include <stdio.h>

int main() {
    unsigned int num;
    int temp1 = 0xFF00;
    int temp2 = 0xFF0000;
    scanf("%x", &num);
    temp1 &= num;
    temp1 <<= 8;
    temp2 &= num;
    temp2 >>= 8;
    num &= 0xFF0000FF;
    temp1 |= temp2;
    num |= temp1;
    printf("0x%x", num);
    return 0;
}