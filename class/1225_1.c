// Practice 1
#include <stdio.h>
int read_line(char *p, int n) {
    char *s = p;
    int i = 0;
    char ch;

    while ((ch = getchar()) != '\n') {
        if (i < n) {

            *p = ch;
        }
        p++;
    }

    *p = '\0';    /* terminates string */
    return p - s; /* number of characters stored */
}
int count_spaces(char *k) {
    int count = 0, i;

    for (; *k != '\0'; k++)
        if (*k == ' ') {
            count++;
            *k = '#';
        }

    return count;
}
int main() {
    char p[1000];
    int count;
    read_line(p, 1000);
    count = count_spaces(p);
    printf("%s\n", p);
    printf("%d", count);
    return 0;
}