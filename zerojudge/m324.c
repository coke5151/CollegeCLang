// m324. 小賴的期中作業(11的最大整數)
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int zero = 0, one = 0;
    int odd = 0, even = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == zero) {
            zero++;
        } else { // arr[i] == one
            one++;
        }
    }
    for (int i = 0; i < n; i += 2) {
        if (arr[i] == 1) {
            odd++;
        }
    }
    for (int i = 1; i < n; i += 2) {
        if (arr[i] == 1) {
            even++;
        }
    }
    

    return 0;
}