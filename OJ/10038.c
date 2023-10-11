// ROR指令

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int k, temp, ans = 0;
    int n, input[32] = {0}, ans_arr[32] = {0};
    scanf("0x%x\n%d", &k, &n);

    int counter = 0;
    temp = k;
    while (temp != 0) {
        counter++;
        temp /= 2;
    }
    temp = k;
    for (int i = 32 - 1; i >= 32 - counter; i--) {
        input[i] = temp % 2;
        temp /= 2;
    }
    // input complete(binary)

    int left[n];
    int right[32 - n];
    int j = 0;
    for (int i = 32 - n; i < 32; i++) {
        left[j] = input[i];
        j++;
    }
    j = 0;
    for (int i = 0; i < 32 - n; i++) {
        right[j] = input[i];
        j++;
    }
    // left and right complete(binary)
    j = 0;
    for (int i = 0; i < n; i++) {
        ans_arr[j] = left[i];
        j++;
    }
    for (int i = 0; i < 32 - n; i++) {
        ans_arr[j] = right[i];
        j++;
    }
    // ans_arr[] complete(binary)

    for (int i = 0; i < 32; i++) {
        ans += (ans_arr[i] * pow(2, 32 - 1 - i));
    }
    printf("0x%x", ans);
    return 0;
}