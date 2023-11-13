// magic square
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int wrap(int rowcol, int wrap_num, int size) {
    rowcol += wrap_num;
    while (rowcol > size - 1) {
        rowcol -= size;
    }
    while (rowcol < 0) {
        rowcol += size;
    }
    return rowcol;
}

int main() {
    int n;
    scanf("%d", &n);
    int ans[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            ans[i][j] = -1;
        }
    }
    int row = 0, col = n / 2; // 5 格：5/2 = 2。0 1 2 3 4，正好在中間
    int last_row = 0, last_col = n / 2;
    int put = 1;
    while (put <= n * n) {
        if (ans[row][col] == -1) {
            last_row = row;
            last_col = col;
            ans[row][col] = put;
            row = wrap(row, -1, n);
            col = wrap(col, 1, n);
            put++;
        } else { // exists
            row = wrap(last_row, 1, n);
            col = last_col;
            last_row = row;
            last_col = col;
            ans[row][col] = put;
            row = wrap(row, -1, n);
            col = wrap(col, 1, n);
            put++;
        }
    }
    int firstprint = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (firstprint) {
                printf("%d", ans[i][j]);
                firstprint = 0;
            } else {
                printf(" %d", ans[i][j]);
            }
        }
        printf("\n");
        firstprint = 1;
    }
    return 0;
}