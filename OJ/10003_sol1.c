// 欸這東西有沒有過期阿（不良解法）
// 看不懂正常，直接看 sol2 就好

#include <stdio.h>
#include <string.h>

int main() {
    int counter = 0;
    char str[10];

    int year, month, day;

    scanf("%s", &str);
    char delim[] = "/";
    char *token = strtok(str, delim);

    while (token != NULL) {
        if (counter == 0)
            day = atoi(token);
        else if (counter == 1)
            month = atoi(token);
        else // counter == 2
            year = atoi(token);
        counter++;
        token = strtok(NULL, delim);
    }
    printf("%04d年%02d月%02d日", year, month, day);
    return 0;
}
