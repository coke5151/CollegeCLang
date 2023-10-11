// 世界上最遙遠的距離
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    double x1, x2, y1, y2, ans;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    ans = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    printf("%.04f", ans);
    return 0;
}