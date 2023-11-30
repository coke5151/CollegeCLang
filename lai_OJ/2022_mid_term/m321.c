// m321. 小賴的期中作業(期中考試)

#include <stdio.h>
#include <stdlib.h>

int main() {
    // 9:00AM = 540 minutes
    // 9:45AM = 585 minutes
    char AP;
    int hr, min, student = 0;
    scanf("%d:%d%cM", &hr, &min, &AP);
    if (AP == 'A') {
        if (hr < 9) {
            printf("YES");
        } else if (hr == 9 && min <= 45) {
            printf("YES");
        } else {
            printf("NO");
        }
    } else {
        printf("NO");
    }

    return 0;
}