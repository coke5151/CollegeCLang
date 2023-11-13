// 重複子字串
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int m;
    scanf("%d\n", &m);
    char s[m + 1];
    scanf("%s", s);

    int lengh = 1;
    char temp_c = '0';
    bool repeat = false;
    while (lengh <= m) {
        for (int i = lengh; i < m; i += lengh) {
            for (int j = 0; j < lengh; j++) {
                if (s[j] != s[i + j]) {
                    repeat = false;
                    break;
                } else {
                    repeat = true;
                }
            }
            if (!repeat) {
                break;
            }
        }

        if (repeat) {
            break;
        }
        lengh++;
    }
    if (lengh > m) {
        lengh = m;
    }
    for (int i = 0; i < lengh; i++) {
        printf("%c", s[i]);
    }
    return 0;
}