// 公鹿二連霸

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n >= 50) {
        printf("100");
    } else if (n >= 45) {
        printf("90");
    } else if (n >= 40) {
        printf("80");
    } else if (n >= 35) {
        printf("70");
    } else if (n >= 30) {
        printf("60");
    } else {
        printf("0");
    }
    return 0;
}