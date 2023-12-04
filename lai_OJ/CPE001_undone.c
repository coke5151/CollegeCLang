// Scrolling Sign
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void printf_arr(char *s[], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%c ", s[i][j]);
        }
        printf("\n");
    }
}

bool compare(int *s[], int s1_w, int s1_left, int s1_right, int s2_w,
             int s2_left, int s2_right) {
    bool same = true;
    int i = s1_left;
    int j = s2_left;
    while (i <= s1_right && j <= s2_right) {
        if (s[s1_w][i] != s[s2_w][j]) {
            same = false;
            break;
        }
        i++;
        j++;
    }
    return same;
}

int main() {
    int n;
    int k, w;
    scanf("%d\n", &n);
    while (n--) {
        scanf("%d %d", &k, &w);
        char s[w][k + 1];
        char *s_mem[w];
        for (int i = 0; i < w; i++) {
            s_mem[i] = s[i];
        }
        // 輸入
        for (int i = 0; i < w; i++) {
            scanf("%s", &s[i][0]);
        }
        // printf_arr(s_mem, w, k);
        }
    return 0;
}