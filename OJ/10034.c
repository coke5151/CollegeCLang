// OOXX

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int ans = 0;
    int counter = 0;
    scanf("%d\n", &n);
    char input[n];
    for (int i = 0; i < n; i++) {
        scanf("%c", &input[i]);
    }

    for (int i = 0; i < n; i++) {
        if (input[i] == 'X') {
            counter = 0;
        } else { // input[i] == 'O'
            counter++;
            ans += counter;
        }
    }
    printf("%d", ans);
    return 0;
}