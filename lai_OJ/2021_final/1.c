// 小賴的期末作業2021篇 我是字串
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s[1000], ss[1000];
    scanf("%[^\n]\n%[^\n]", s, ss);
    if (strcmp(s, ss) == 0) {
        printf("same");
    } else {
        printf("different");
    }
    return 0;
}