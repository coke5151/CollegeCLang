// 魔術

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int conbine_num(int a, int b, int c) { return 100 * a + 10 * b + c; }
int magic_sum(int a1, int a2, int a3) {
    int sum = 0;
    sum += conbine_num(a1, a3, a2);
    sum += conbine_num(a2, a1, a3);
    sum += conbine_num(a2, a3, a1);
    sum += conbine_num(a3, a1, a2);
    sum += conbine_num(a3, a2, a1);
    return sum;
}

int main() {
    bool complete = false;
    int sum;
    scanf("%d", &sum);
    int a1, a2, a3;
    for (a1 = 0; a1 <= 9; a1++) {
        for (a2 = 0; a2 <= 9; a2++) {
            for (a3 = 0; a3 <= 9; a3++) {
                if (magic_sum(a1, a2, a3) == sum) {
                    printf("%d %d %d", a1, a2, a3);
                    complete = true;
                    break;
                }
            }
            if (complete) {
                break;
            }
        }
        if (complete) {
            break;
        }
    }
    return 0;
}