// 欸這東西有沒有過期阿

#include <stdio.h>
#include <stdlib.h>

int main() {
    int year, month, day;
    scanf("%d/%d/%d", &day, &month, &year);
    printf("%04d年%02d月%02d日", year, month, day);
    return 0;
}
