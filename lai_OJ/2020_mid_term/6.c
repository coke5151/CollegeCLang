// 小賴的期中作業2020篇(最大的幾位and回文)
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX(i, j) (i > j ? i : j)
#define MIN(i, j) (i < j ? i : j)

bool isPali(char a[], int n) {
    bool is_pali = true;
    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - 1 - i]) {
            is_pali = false;
            break;
        }
    }
    return is_pali;
}

int main() {
    char s[10005] = {0};
    scanf("%s", s);
    bool first_compare = true;
    int mx, mn;
    for (int i = 0; i < strlen(s); i++) {
        if (first_compare) {
            mx = s[i] - '0';
            mn = s[i] - '0';
            first_compare = false;
        } else {
            mx = MAX(mx, (s[i] - '0'));
            mn = MIN(mn, (s[i] - '0'));
        }
    }
    if (isPali(s, strlen(s))) {
        printf("%d %d YES", mx, mn);
    } else {
        printf("%d %d NO", mx, mn);
    }
    return 0;
}