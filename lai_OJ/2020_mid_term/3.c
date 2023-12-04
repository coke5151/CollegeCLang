// 小賴的期中作業2020篇(時間差)
#include <stdio.h>
#include <stdlib.h>

int main() {
    int h1, m1, h2, m2;
    char ap1, ap2;
    scanf("%d:%d%cM\n%d:%d%cM", &h1, &m1, &ap1, &h2, &m2, &ap2);
    // 讓 h1, h2 存 24 時制
    if (ap1 == 'P') {
        h1 += 12;
    }
    if (ap2 == 'P') {
        h2 += 12;
    }
    // 把小時換算成分鐘存在 m1, m2
    m1 += h1 * 60;
    m2 += h2 * 60;
    if (m2 - m1 <= 1) {
        printf("%dminute", m2 - m1);
    } else {
        printf("%dminutes", m2 - m1);
    }
    return 0;
}