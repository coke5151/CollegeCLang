// 小賴的期中作業2022篇第二次期中考(資料庫操作)
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int t, n;
    scanf("%d %d\n", &t, &n);
    char db[n];
    bool first_scanf = true;
    for (int i = 0; i < n; i++) {
        if (first_scanf) {
            first_scanf = false;
            scanf("%c", &db[i]);
        } else {
            scanf(" %c", &db[i]);
        }
    }
    char act;
    int p, q;
    scanf("%*[^\n]"); // 把輸入流裡剩下的東西讀掉
    while (t--) {
        scanf(" %c", &act);
        if (act == 'a') {
            for (int i = 0; i < n; i++) {
                db[i] = '_';
            }
        } else if (act == 'b') {
            scanf(" %d", &p);
            for (int i = 0; i < n; i++) {
                if (db[i] == ('0' + p)) { // 記得 p 是數字但 db 是字元陣列
                    db[i] = '_';
                }
            }
        } else if (act == 'c') {
            scanf(" %d %d", &p, &q);
            for (int i = 0; i < n; i++) {
                if (db[i] == ('0' + p)) { // 記得 p 是數字但 db 是字元陣列
                    db[i] = ('0' + q); // 記得 q 是數字但 db 是字元陣列
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%c ", db[i]);
    }
    return 0;
}