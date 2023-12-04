// 小賴的期中作業2023篇第二次期中考(圖書館管理員)
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int ans[m];
    int temp;
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        if (temp != 0) {
            ans[temp - 1] = i + 1;
        }
    }
    for (int i = 0; i < m; i++) {
        printf("%d ", ans[i]);
    }
    return 0;
}