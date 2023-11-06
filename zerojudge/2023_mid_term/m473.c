// m473. 小賴的期中考(啊？？11的倍數)
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int counter = 0;
    int temp = b;
    while (temp > 0) {
        counter++;
        temp /= 10;
    }

    int combine = 0;
    combine = a * pow(10, counter) + b;

    int odd = 0, even = 0;
    int thiseven = 0;
    temp = combine;
    while (temp > 0) {
        if (thiseven) {
            thiseven = 0;
            even += temp % 10;
            temp /= 10;
        } else {
            thiseven = 1;
            odd += temp % 10;
            temp /= 10;
        }
    }
    if (abs(odd - even) % 11 == 0) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}