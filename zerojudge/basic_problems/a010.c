// a010. 因數分解
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct num {
    int n;
    int pow;
} num;

int main() {
    int n;
    scanf("%d", &n);
    int current_pow = 0;
    num nums[100000] = {0, 0};
    int size = 0;

    int j = 0;
    for (int i = 2; i <= n; i++) {
        while (n % i == 0 && n / i != 0) {
            n /= i;
            nums[j].n = i;
            nums[j].pow++;
        }
        if (nums[j].n != 0 && nums[j].pow != 0) {
            size++;
            j++;
        }
    }

    bool first_print = true;
    for (int i = 0; i < size; i++) {
        if (first_print) {
            if (nums[i].pow == 1) {
                printf("%d", nums[i].n);
            } else { // nums[i].pow >= 2
                printf("%d^%d", nums[i].n, nums[i].pow);
            }
            first_print = false;
        } else {
            if (nums[i].pow == 1) {
                printf(" * %d", nums[i].n);
            } else { // nums[i].pow >= 2
                printf(" * %d^%d", nums[i].n, nums[i].pow);
            }
        }
    }
    return 0;
}