// 小賴的期末作業2022篇 字串合併
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s[10000] = {0};
    char ss[10000] = {0};

    // 使用fgets來安全地讀取字串
    fgets(s, sizeof(s), stdin);
    fgets(ss, sizeof(ss), stdin);

    // 移除字串中的換行符
    s[strcspn(s, "\n")] = '\0';
    ss[strcspn(ss, "\n")] = '\0';

    printf("%s%s\n%lu", s, ss, strlen(s) + strlen(ss));
    return 0;
}
