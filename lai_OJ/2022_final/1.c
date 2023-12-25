// 小賴的期末作業2022篇 回文字串串字文回
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool isPali(char s[], int n) {
    bool ans = true;
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i]) {
            ans = false;
            break;
        }
    }
    return ans;
}

int main() {
    char s[1000];
    scanf("%s", s);
    if (isPali(s, strlen(s))) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}