// 多項式

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    scanf("%d", &n);
    int f[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &f[i]);
    }
    scanf("%d", &m);
    int g[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &g[i]);
    }

    // declare and initialize h(x)
    int h[n + m - 1];
    for (int i = 0; i < n + m - 1; i++) {
        h[i] = 0;
    }
    //

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            h[i + j] += (f[i] * g[j]);
        }
    }

    // output
    bool firstprint = true;
    for (int i = 0; i < (n + m - 1); i++) {
        if (firstprint) {
            printf("%d", h[i]);
            firstprint = false;
        } else {
            printf(" %d", h[i]);
        }
    }
    return 0;
}