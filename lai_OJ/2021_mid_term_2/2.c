// 小賴的期中作業2021篇第二次期中考(給我最大的!@!)
#include <stdio.h>
#include <stdlib.h>

#define MAX(i, j) (i > j ? i : j)
#define MIN(i, j) (i < j ? i : j)

int main() {
    int m, b;
    int small_dis;         // 最接近 0 的結果
    int small_greater_num; // 同樣接近 0 的結果中較大的
    scanf("%d %d\n", &m, &b);
    int temp;
    for (int i = 0; i < m; i++) {
        scanf("%d", &temp);
        if (i == 0) {
            small_dis = abs(temp - b);
            small_greater_num = temp;
            continue;
        }
        if (abs(temp - b) == small_dis) {
            small_greater_num = MAX(small_greater_num, temp);
        } else if (abs(temp - b) < small_dis) {
            small_dis = abs(temp - b);
            small_greater_num = temp;
        }
    }
    printf("%d", small_greater_num);
    return 0;
}