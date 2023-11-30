// 身分證驗證

#include <stdio.h>
#include <stdlib.h>

int main() {
    int step1 = 0, step2 = 0, step3 = 0, step4 = 0;
    char str[10], alphabet;
    scanf("%s", str);
    alphabet = str[0];

    // 首位字母轉換成數字
    if (10 <= alphabet - 'A' + 10 && alphabet - 'A' + 10 <= 17) {
        step1 = alphabet - 'A' + 10;
    } else if (alphabet == 'I') {
        step1 = 34;
    } else if (18 <= alphabet - 'J' + 18 && alphabet - 'J' + 18 <= 22) {
        step1 = alphabet - 'J' + 18;
    } else if (alphabet == 'O') {
        step1 = 35;
    } else if (23 <= alphabet - 'P' + 23 && alphabet - 'P' + 23 <= 29) {
        step1 = alphabet - 'P' + 23;
    } else if (alphabet == 'W') {
        step1 = 32;
    } else if (30 <= alphabet - 'X' + 30 && alphabet - 'X' + 30 <= 31) {
        step1 = alphabet - 'X' + 30;
    } else { // alphabet == 'Z'
        step1 = 33;
    }

    step2 = (step1 / 10) + ((step1 % 10) * 9);
    for (int i = 1; i <= 8; i++) {
        step3 += (str[i] - '0') * (8 - i + 1);
    }
    step4 = step2 + step3 + (str[9] - '0');
    if (step4 % 10 == 0) {
        printf("real");
    } else {
        printf("fake");
    }
    return 0;
}