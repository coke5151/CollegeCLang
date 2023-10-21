// m326. 小賴的期中作業(BitO)
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int get_byte_value(int binary[32], int k) {
    int sum = 0;
    int j = 7;
    for (int i = k * 8; i < k * 8 + 8; i++) {
        sum += binary[i] * pow(2, j);
        j--;
    }
    return sum;
}

int main() {
    unsigned int n, temp;
    int binary[32] = {0};
    int bytes[4] = {0};
    scanf("%x", &n);

    temp = n;
    int i = 31;
    while (temp != 0) {
        binary[i] = temp % 2;
        i--;
        temp /= 2;
    }
    for (i = 0; i <= 31; i++) {
        bytes[i / 8] += binary[i];
    }

    // for (int i = 0; i < 31; i++) {
    //     printf("%d", binary[i]);
    // }
    // printf("\n");
    // for (int i = 0; i < 4; i++) {
    //     printf("%d", bytes[i]);
    // }
    // printf("\n");

    // 找出最小 Bytes 與它們的產地
    int mn = 9;
    int mn_i = 0;
    for (i = 0; i < 4; i++) {
        if (bytes[i] < mn) {
            mn = bytes[i];
            mn_i = i;
        } else if (bytes[i] == mn &&
                   get_byte_value(binary, i) > get_byte_value(binary, mn_i)) {
            mn_i = i;
        }
    }

    // 輸出
    for (i = mn_i * 8; i < mn_i * 8 + 8; i++) {
        printf("%d", binary[i]);
    }
    return 0;
}