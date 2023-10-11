// 顏料學

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, y, c, n;
    bool enough = true;
    scanf("%d %d %d\n%d\n", &m, &y, &c, &n);
    char queue[n];
    for (int i = 0; i < n; i++) {
        scanf("%c", &queue[i]);
    }

    for (int i = 0; i < n; i++) {
        if (queue[i] == 'W') {
            // do nothing
        } else if (queue[i] == 'B') {
            m--;
            y--;
            c--;
        } else if (queue[i] == 'G') {
            y--;
            c--;
        } else if (queue[i] == 'V') {
            m--;
            c--;
        } else if (queue[i] == 'R') {
            m--;
            y--;
        } else if (queue[i] == 'M') {
            m--;
        } else if (queue[i] == 'Y') {
            y--;
        } else if (queue[i] == 'C') {
            c--;
        }

        if (m < 0 || y < 0 || c < 0) {
            enough = false;
            break;
        }
    }
    if (enough) {
        printf("YES %d %d %d", m, y, c);
    } else { // not enough
        printf("NO");
    }
    return 0;
}