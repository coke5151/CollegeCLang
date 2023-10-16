#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int gcd(int a, int b) {
    if (a < b) { // let a > b
        swap(&a, &b);
    }

    if (a % b == 0) {
        return b;
    } else {
        return gcd(a % b, b);
    }
}

typedef struct frac {
    int up;
    int down;
} frac;

int main() {
    frac a, b, ans;
    int temp;
    scanf("%d/%d %d/%d", &a.up, &a.down, &b.up, &b.down); // eg: 4/5 5/3

    temp = a.down;
    a.up *= b.down;
    a.down *= b.down;
    b.up *= temp;
    b.down *= temp;
    ans.up = a.up + b.up;
    ans.down = a.down;

    // printf("%d/%d", a.up + b.up, a.down);
    int gd = gcd(ans.up, ans.down);
    ans.up /= gd;
    ans.down /= gd;
    if(ans.down == 1){
        printf("%d", ans.up);
    } else {
        printf("%d/%d", ans.up, ans.down);
    }
    return 0;
}