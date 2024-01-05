#include <stdio.h>
int strcmp(char *s, char *t) {
    for (; *s++ == *t++;)
        if (*s == '\0')
            return 1;
    return 0;
}
int main() {
    char str1[1000], str2[1000], *s = str1, *t = str2;
    gets(str1);
    gets(str2);
    printf("%d", strcmp(s, t));
}