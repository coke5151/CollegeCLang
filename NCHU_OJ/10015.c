// 二元一次聯立方程式

#include <stdio.h>
#include <stdlib.h>

typedef struct fomula {
    double x;
    char operator;
    double y;
    double c;
} fomula;

int main() {
    fomula r, s;
    double rate, x, y, z;
    scanf("%lfx%c%lfy=%lf", &r.x, &r.operator, & r.y, &r.c);
    scanf("%lfx%c%lfy=%lf", &s.x, &s.operator, & s.y, &s.c);
    if (r.operator== '-') {
        r.y = -r.y;
    }
    if (s.operator== '-') {
        s.y = -s.y;
    }
    // printf("%lfx%+lfy=%lf\n", r.x, r.y, r.c); // 印出來看看
    // printf("%lfx%+lfy=%lf", s.x, s.y, s.c); // 印出來看看
    rate = r.x / s.x;
    s.x *= rate;
    s.y *= rate;
    s.c *= rate;

    y = (s.c - r.c) / (s.y - r.y);
    x = (r.c - r.y * y) / (r.x);
    printf("x=%.2lf,y=%.2lf", x, y);
    return 0;
}