// 小賴的期末作業2022篇 字串比較
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s[1000] = {0}, ss[1000] = {0};
    int sum = 0;
    fgets(s, 1000, stdin);
    fgets(ss, 1000, stdin);
    s[strcspn(s, "\n")] = '\0';
    ss[strcspn(ss, "\n")] = '\0';

    for (int i = 0; i < strlen(s) && i < strlen(ss); i++) {
        if (s[i] == ss[i]) {
            sum++;
        }
    }

    if (strlen(s) == strlen(ss)) {
        if (sum == strlen(s)) {
            printf("YES");
        } else {
            printf("NO");
        }
    } else {
        printf("NO");
    }
    printf("\n%d", sum);
    return 0;
}