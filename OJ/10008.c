// 分數的加法

#include <stdio.h>
#include <stdlib.h>

int main() {
    int au, ad, bu, bd;
    scanf("%d/%d\n%d/%d", &au, &ad, &bu, &bd);
    // printf("%d/%d、%d/%d", au, ad, bu, bd);
    if (ad == bd) // 不用通分，分母已一樣
        printf("%d/%d", au + bu, ad);
    else // 需要通分
        printf("%d/%d", au * bd + bu * ad, ad * bd);
    return 0;
}