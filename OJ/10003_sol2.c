// 欸這東西有沒有過期阿

#include <stdio.h>
#include <stdlib.h>

int main() {
    int year, month, day;
    // 依題目順序輸入 day, month, year，記得用 / 分隔
    scanf("%d/%d/%d", &day, &month, &year);
    // 依題目要求依序輸出 year, month, day
    // %04d：補到四位；%02d：補到兩位
    printf("%04d年%02d月%02d日", year, month, day);
    return 0;
}
