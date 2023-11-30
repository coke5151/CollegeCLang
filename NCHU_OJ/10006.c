// UPC條碼問題

#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[11]; // 0~10
    scanf("%s", input);
    int sum1 = 0, sum2 = 0;
    int result;
    // i=0, 2, 4, 6, 8, 10 ---> 第 1、3、5、7、9、11
    for (int i = 0; i < 11; i += 2)
        sum1 += (input[i] - '0');
    for (int i = 1; i < 10; i += 2) // i=1, 3, 5, 7, 9 ---> 第 2、4、6、8、10
        sum2 += (input[i] - '0');
    result = sum1 * 3 + sum2;
    result--;
    result %= 10;
    printf("%d", abs(result - 9));
    return 0;
}