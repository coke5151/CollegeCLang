// 海龍公式

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    double a, b, c, s, ans;
    scanf("%lf %lf %lf", &a, &b, &c);
    s = (a + b + c) / 2;
    ans = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("%.2f", ans);
    return 0;
}