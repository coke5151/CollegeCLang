// 水泥匠

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void swap(int *i, int *j) {
    int temp = *i;
    *i = *j;
    *j = temp;
}

int main() {
    int n, m;
    int action, p1, p2;
    scanf("%d %d", &n, &m);
    bool wall[n];
    for (int i = 0; i < n; i++) {
        wall[i] = false; // 初始化，一開始沒水泥
    }

    for (int i = 0; i < m; i++) { // m 次操作
        scanf("%d", &action);
        if (action == 1) {
            scanf("%d %d", &p1, &p2);
            if (p1 > p2) {
                swap(&p1, &p2);
            }
            for (int j = p1; j <= p2; j++) {
                if (j >= 0 && j <= n - 1) {
                    wall[j] = true;
                }
            }
        } else if (action == 2) {
            scanf("%d %d", &p1, &p2);
            if (p1 > p2) {
                swap(&p1, &p2);
            }
            for (int j = p1; j <= p2; j++) {
                if (j >= 0 && j <= n - 1) {
                    wall[j] = false;
                }
            }
        } else if (action == 3) {
            scanf("%d", &p1);
            int j;
            if (p1 >= 0 && p1 <= n - 1) {
                if (wall[p1] == false) {
                    j = p1 + 1;
                    while (wall[j] == false && j >= 0 && j <= n - 1) {
                        wall[j] = true;
                        j++;
                    }
                    j = p1 - 1;
                    while (wall[j] == false && j >= 0 && j <= n - 1) {
                        wall[j] = true;
                        j--;
                    }
                }
                wall[p1] = true;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%c", wall[i] ? 'X' : '.');
    }
    return 0;
}