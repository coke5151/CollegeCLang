// m322. 小賴期中考作業(最大又最小的回文)
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool isPali(int n) {
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

    bool flag = true;
    for (int i = 0; i < counter; i++) {
        if (arr[i] != arr[counter - 1 - i]) {
            flag = false;
        }
    }
    return flag;
}

int main() {
    int n;
    scanf("%d", &n);
    n++;
    while (!isPali(n)) {
        n++;
    }
    printf("%d", n);
    return 0;
}