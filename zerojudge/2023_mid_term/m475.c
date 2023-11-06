// m475. 小賴的期中考(啊又是你個位數字和)
#include <stdio.h>
#include <stdlib.h>

int add(int n) {
    if (n < 10) {
        return n;
    } else {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return add(sum);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", add(n));
    return 0;
}