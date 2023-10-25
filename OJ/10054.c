// 糖果罐
#include <stdio.h>
#include <stdlib.h>
#define MIN(i, j) (i < j ? i : j)

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    scanf("%d", &arr[0]);
    int mn = arr[0];
    for (int i = 1; i < n; i++) {
        scanf("%d", &arr[i]);
        mn = MIN(mn, arr[i]);
    }

    int ans = 0;
    for(int i = 0;i<n;i++){
        ans += (arr[i]-mn);
    }
    printf("%d", ans);
    return 0;
}