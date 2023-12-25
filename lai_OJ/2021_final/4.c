// 小賴的期末作業2021篇 字串在字串
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s[1000] = {0}, ss[1000] = {0};
    scanf("%s\n%s", s, ss);
    bool same;
    if (strlen(s) >= strlen(ss)) {
        for (int flag = 0; flag <= strlen(s) - strlen(ss); flag++) {
            same = true;
            for (int i = flag; i <= strlen(ss); i++) {
                if (s[i] != ss[i - flag]) {
                    same = false;
                    break;
                }
            }
            if (same) {
                printf("YES");
                break;
            }
        }
        if (!same) {
            printf("NO");
        }
    } else {
        printf("NO");
    }
    return 0;
}