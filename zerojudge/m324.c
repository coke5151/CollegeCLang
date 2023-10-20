// m324. 小賴的期中作業(11的最大整數)
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int current_count[2] = {0}; // 用來儲存各還有幾顆糖果
int arrangement[1000000] = {0};
int n;
int mx = -1;

#define MAX(i, j) (i > j ? i : j)

int get_value(int arr[], int n) {
    int value = 0;
    // for (int i = 0; i < n; i++) {
    //     printf("%d, ", arr[i]);
    // }
    // printf("\n");
    for (int i = 0; i < n; i++) {
        value += arr[i] * pow(10, n - 1 - i);
    }
    return value;
}

bool isfactor(int arr[], int n) {
    int odd = 0, even = 0;
    int minus = 0;
    for (int i = 0; i < n; i += 2) {
        odd += arr[i];
    }
    for (int i = 1; i < n; i += 2) {
        even += arr[i];
    }
    minus = abs(odd - even);
    return (minus % 11 == 0);
}

void dfs(int layer) {
    if (layer == n) {
        if (isfactor(arrangement, n)) {
            mx = MAX(mx, get_value(arrangement, n));
        }
        return;
    }

    for (int i = 0; i < 2; i++) {
        if (current_count[i] == 0) { // 如果沒有剩下了
            continue;
        } else {
            current_count[i]--; // 用掉一顆
            arrangement[layer] = i;
            dfs(layer + 1); // 下一層 DFS
            current_count[i]++;
        }
    }
}

int main() {
    int temp;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        if (temp == 1) {
            current_count[1]++;
        } else {
            current_count[0]++;
        }
    }
    if (current_count[1] == 0) {
        printf("-1");
    } else {
        dfs(0);
        printf("%d", mx);
    }

    return 0;
}