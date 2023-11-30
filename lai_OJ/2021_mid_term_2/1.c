// 小賴的期中作業2021篇第二次期中考(字串連擊OuO)
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX(i, j) (i > j ? i : j)

bool isPali(char s[], int voc_left, int voc_right) {
    bool ispalidrome = true;
    for (int i = voc_left, j = voc_right; i <= j; i++, j--) {
        if (s[i] != s[j]) {
            ispalidrome = false;
            break;
        }
    }
    return ispalidrome;
}

int main() {
    char s[1000];
    int check_ana_num = 0;
    int longest = 0;
    scanf("%[^\n]", s);
    int i = 0;
    int counter = 0;
    int voc_left_i = 0;
    int voc_right_i = 0;
    int check[1000][26] = {0}; // 每個單字使用的字母有哪些
    bool anagram = false;      // 此次輸出是否有 anagram
    // 記錄最大值
    while (s[i] != '?' && s[i] != '.' && s[i] != '!') {
        if (i == 0) {
            counter++;
        } else {
            if (s[i] == ' ' && s[i - 1] != ' ') { // 一個單字結束
                longest = MAX(longest, counter);  // 記錄最長的單字多長
                counter = 0;
            } else if (s[i] != ' ' && s[i - 1] == ' ') {
                counter++;
            } else if (s[i] != ' ' && s[i - 1] != ' ') {
                counter++;
            }
        }
        i++;
    }
    printf("%d\n", longest);
    // 處理其它
    i = 0;
    bool left_prepared = false;
    while (s[i] != '?' && s[i] != '.' && s[i] != '!') {
        if (left_prepared) {
            if (i > 0) {
                if (s[i] == ' ' && s[i - 1] != ' ') { // 一個單字結束
                    check_ana_num++; // 記錄要檢查的總數量
                    voc_right_i = i - 1;
                    if (isPali(s, voc_left_i, voc_right_i)) { // 如果是迴文
                        for (int i = voc_left_i; i <= voc_right_i; i++) {
                            printf("%c", s[i]); // 印出單字
                        }
                        printf(" ");
                    }
                    for (int i = voc_left_i; i <= voc_right_i; i++) {
                        check[check_ana_num][s[i] - 'a']++;
                        check_ana_num++;
                    }

                } else if (s[i] != ' ' && s[i - 1] == ' ') {
                    voc_left_i = i;
                }
            }
        } else {
            if (s[i] != ' ') {
                left_prepared = true;
                voc_left_i = i;
            }
        }
        i++;
    }
    bool same_one;
    bool same_whole;
    for (int i = 0; i < check_ana_num; i++) {
        same_whole = false;
        for (int j = i + 1; j < check_ana_num; j++) {
            same_one = true;
            for (int k = 0; k < 26; k++) {
                if (check[i][k] != check[j][k]) {
                    same_one = false;
                    break;
                }
            }
            if (same_one) {
                same_whole = true;
                break;
            }
        }
        if (same_whole) {
            anagram = true;
        }
    }
    printf("\n");
    if (anagram) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}
