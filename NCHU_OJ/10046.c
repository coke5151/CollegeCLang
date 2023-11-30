// 重複位數

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void check(int n) {
    int temp = n, counter = 0;
    bool repeat = false;
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
        for (int j = i; j < counter; j++) {
            if (i != j && arr[i] == arr[j]) {
                repeat = true;
                break;
            }
        }
        if (repeat) {
            break;
        }
    }
    if (repeat) {
        printf("Repeated digits");
    } else {
        printf("No repeated digits");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    check(n);
    return 0;
}