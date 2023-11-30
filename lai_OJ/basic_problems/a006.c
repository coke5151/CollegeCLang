// a006. 一元二次方程式
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    double a, b, c;
    double root1, root2;
    scanf("%lf %lf %lf", &a, &b, &c);
    double discriminant = pow(b, 2) - 4 * a * c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two different roots x1=%.0lf , x2=%.0lf", root1, root2);
    } else if (discriminant == 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        printf("Two same roots x=%.0lf", root1);
    } else { // discriminant < 0
        printf("No real root");
    }
    return 0;
}