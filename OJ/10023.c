// 連續的1

#include <stdio.h>
#include <stdlib.h>

#define MIN(i, j) (((i) < (j)) ? (i) : (j))
#define MAX(i, j) (((i) > (j)) ? (i) : (j))

int main() {
    unsigned int input;
    int size = 0, mx = 0, counter = 0;
    scanf("%u", &input);
    unsigned int temp = input;
    while (temp != 0) {
        size++;
        temp /= 2;
    }
    // printf("size = %d\n", size);

    temp = input;
    int nums[size];
    for (int i = 0; i < size; i++) {
        nums[i] = input % 2;
        // printf("%d", nums[i]);
        input /= 2;
    }

    // printf("\n");
    for (int i = 0; i < size; i++) {
        if (nums[i] == 1) {
            counter++;
            // printf("%d", counter);
        } else { // nums[i] == 0
            mx = MAX(mx, counter);
            counter = 0;
            // printf("mx: %d, ", mx);
        }
    }
    mx = MAX(mx, counter);
    printf("%d", mx);
    return 0;
}