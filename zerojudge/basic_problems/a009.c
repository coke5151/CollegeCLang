// a009. 解碼器
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[1000];
    int k = '*' - '1';
    gets(str);
    for (int i = 0; i < strlen(str); i++) {
        printf("%c", str[i] + k);
    }
    return 0;
}