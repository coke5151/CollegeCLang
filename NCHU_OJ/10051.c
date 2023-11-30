// HS Value

#include <stdio.h>
#include <stdlib.h>

int length_of_num(int a) {
    int length = 0;
    while (a != 0) {
        a /= 10;
        length++;
    }
    return length;
}

int main() {
    long long n, a, happy, sad, length;
    scanf("%lld", &n);
    for (int i = 0; i < n; i++) { // n 個資料
        happy = 0;
        sad = 0;
        scanf("%lld", &a);
        length = length_of_num(a);
        for (int i = 1; i <= length; i++) {
            happy += a%10 * (length-i+1);
            sad += a%10 * i;
            a /= 10;
        }
        printf("%lld %lld\n%lld\n", happy, sad, llabs(happy-sad));
    }
    return 0;
}