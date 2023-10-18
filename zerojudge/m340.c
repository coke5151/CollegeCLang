// m340. 小賴的期中作業2021篇 (哈哈又是我最小又最大的回文數)
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool isPali(int n) {
    bool palidrome = true;
    int counter = 0;
    int temp = n;
    while (temp != 0) {
        counter++;
        temp /= 10;
    }
    int arr[counter];
    temp = n;
    for (int i = 0; i < counter; i++) {
        arr[i] = temp % 10;
        temp /= 10;
    }

    for (int i = 0; i < counter; i++) {
        if (arr[i] != arr[counter - 1 - i]) {
            palidrome = false;
            break;
        }
    }
    return palidrome;
}

int main() {
    int n, temp, counter;
    scanf("%d", &n);

    temp = n;
    counter = 0;
    while (temp != 0) {
        counter++;
        temp /= 10;
    }
    temp = n;
    int num[counter];
    for (int i = counter - 1; i >= 0; i--) {
        num[i] = temp % 10;
        temp /= 10;
    }

    printf("%d\n", counter); // (a)
    for (int i = counter - 1; i >= 0; i--) {
        printf("%d", num[i]);
    }
    printf("\n"); // (b)

    temp = n + 1;
    while (!isPali(temp)) {
        temp++;
    }
    printf("%d", temp);
    return 0;
}