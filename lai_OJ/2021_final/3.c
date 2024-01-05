// 小賴的期末作業2021篇 字串是我
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s[100000000];
    int sum = 0;
    fgets(s, 100000000, stdin);
    *(s + strcspn(s, "\n")) = '\0';
    for (int i = 0; i < strlen(s); i++) {
        if ('a' <= *(s + i) && *(s + i) <= 'z') {
            *(s + i) += 'A' - 'a';
        }
        if (*(s + i) == 'A' || *(s + i) == 'B' || *(s + i) == 'D' ||
            *(s + i) == 'W' || *(s + i) == 'R') {
            sum++;
        }
    }
    printf("%s %d", s, sum);
    return 0;
}