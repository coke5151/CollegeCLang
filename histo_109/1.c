#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define MIN(i, j) (i < j ? i : j)

int cal_length_hex(unsigned int n) {
    int counter = 0;
    while (n != 0) {
        counter++;
        n /= 16;
    }
    return counter;
}

int cal_length_bin(unsigned int n) {
    int counter = 0;
    while (n != 0) {
        counter++;
        n /= 2;
    }
    return counter;
}

void swap_byte(int a[], int b[]) {
    int temp[2];
    temp[0] = a[0];
    temp[1] = a[1];

    a[0] = b[0];
    a[1] = b[1];

    b[0] = temp[0];
    b[1] = temp[1];
}

int main() {
    unsigned int temp;
    unsigned int n;
    scanf("%x", &n);

    int length_hex = cal_length_hex(n);
    int num_hex[length_hex];
    int num_hex_input[length_hex];

    temp = n;
    for (int i = length_hex - 1; i >= 0; i--) {
        num_hex[i] = temp % 16;
        temp /= 16;
    }
    for (int i = 0; i < length_hex; i++) {
        num_hex_input[i] = num_hex[i];
    }
    swap_byte(&num_hex[2], &num_hex[4]);

    // show the result in hex
    n = 0;
    for (int i = length_hex - 1, j = 0; i >= 0; i--, j++) {
        n += num_hex[i] * pow(16, j);
    }
    printf("0x%x\n", n);

    // show the result in binary
    temp = n;
    int length_bin = cal_length_bin(n);
    int num_bin[length_bin];
    for (int i = length_bin - 1; i >= 0; i--) {
        num_bin[i] = temp % 2;
        temp /= 2;
    }
    for (int i = 0; i < length_bin; i++) {
        printf("%d", num_bin[i]);
    }
    printf("\n");

    // smallest number of 1 bits in which byte
    int mn = 17;
    int mn_i = 0;
    for (int i = 0; i < length_hex - 1; i++) {
        if (num_hex_input[i] < mn) {
            mn = num_hex_input[i];
            mn_i = i;
        }
    }
    printf("第 %d 個 byte\n", 1 + (mn_i / 2));

    return 0;
}