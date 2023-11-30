// 大小姐的生日禮物

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n > 0) {
        printf("%d %d", n / 3, n % 3);
    } else // n<0
    {
        if (n % 3 == 0) // 需再付的錢可整除
            printf("%d 0", n / 3);
        else // 需再付的錢不可整除
            printf("%d %d", ((n / 3) - 1), n - (3 * ((n / 3) - 1)));
    }
    return 0;
}
