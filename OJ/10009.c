// 手機密碼
#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[6];
    scanf("%s", input);
    for (int i = 0; i < 5; i++) {
        printf("%d", abs(input[i + 1] - input[i]));
    }
    return 0;
}