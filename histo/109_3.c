#include <stdio.h>
#include <stdlib.h>

typedef struct time {
    int hr;
    int min;
    char sym[2];
} time;

time format_12_to_24(time a) {
    if (a.sym[0] == 'P') {
        a.hr = 12 + a.hr % 12;
    }
    return a;
}

int main() {
    time a, b;
    scanf("%d:%d%c%c\n", &a.hr, &a.min, &a.sym[0], &a.sym[1]);
    scanf("%d:%d%c%c", &b.hr, &b.min, &b.sym[0], &b.sym[1]);
    a = format_12_to_24(a);
    b = format_12_to_24(b);
    printf("%d minutes", abs((a.hr * 60 + a.min) - (b.hr * 60 + b.min)));
    return 0;
}