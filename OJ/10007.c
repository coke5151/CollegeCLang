// Ascii國民身份大轉換

#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[3];
    scanf("%s", name);
    for (int i = 0; i < 3; i++)
        printf("%c", name[i] - ('a' - 'A'));
    return 0;
}