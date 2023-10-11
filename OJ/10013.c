// 中興湖水怪

#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[5];
    scanf("%s", input);
    for (int i = 0; i < 5; i++) {
        printf("%c", input[i] ^ '&');
    }
    return 0;
}