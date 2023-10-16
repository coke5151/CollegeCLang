#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool isPali(int arr[], int n) {
    bool flag = true;
    for (int i = 0; i < n; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            flag = false;
            break;
        }
    }
    return flag;
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

    if (counter <= 1) {
        printf("%d digit\n", counter);
    } else {
        printf("%d digits\n", counter);
    }

    printf("most significant digit: %d\nleast significant digit: %d\n", num[0],
           num[counter - 1]);
    if (isPali(num, counter)) {
        printf("Is palindrome");
    } else {
        printf("Is not palidrome");
    }
    return 0;
}