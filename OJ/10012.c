// 101大樓特賣週年會
// clang 編輯：clang 10012.c -lm
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[4];
    unsigned int var1 = 0, var2 = 0;
    unsigned int two[16] = {0};
    scanf("%s", input); // 16 進制 unsigned int 輸入（2 bytes）
    for (int i = 0; i < 4; i++) {
        var1 += input[i] <= '9' ? (input[i] - '0') * pow(16, 4 - i - 1)
                                : (input[i] - 'a' + 10) * pow(16, 4 - i - 1);
    }
    int i = 15;
    while (var1 != 0) {
        two[i] = var1 % 2;
        var1 /= 2;
        i--;
    }

    two[16 - 5] = 1;
    two[16 - 6] = 0;
    two[16 - 7] = 1;

    for (int i = 0; i < 16; i++) {
        var2 += two[i] * pow(2, 16 - i - 1);
    }
    printf("%x", var2);
    return 0;
}