// 交換BYTE
// 這題要求需使用 Bit 的運算來交換，但我不知道具體怎麼做，先暫停。
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n;
    scanf("0x%x", &n);

    return 0;
}