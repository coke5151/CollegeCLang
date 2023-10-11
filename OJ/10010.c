// 小熊的圓

#include <stdio.h>
#include <stdlib.h>

int main() {
    double r, pi = 3.14159;
    scanf("%lf", &r);
    printf("%.2lf\n%.2lf\n%.0lf", pi * r * r, 2 * pi * r, 2 * r);
    return 0;
}