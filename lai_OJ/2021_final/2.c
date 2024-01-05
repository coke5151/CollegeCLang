// 小賴的期末作業2021篇 叫我C語言
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar(); // 消耗換行符號

    char temp[100];
    while (n--) {
        fgets(temp, sizeof(temp), stdin);
        *(temp + strcspn(temp, "\n")) = '\0'; // 刪除 fgets 產生的換行符號
        int lng = strlen(temp);
        if (lng >= 2 && *(temp + lng - 1) == 'c' && *(temp + lng - 2) == '.') {
            printf("%s\n", temp);
        }
    }
    return 0;
}
