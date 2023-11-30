// 小賴的期中作業2021篇第二次期中考(字串連擊OuO)
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX(i, j) (i > j ? i : j)

bool isAnagram(char s[], int voc1_left, int voc1_right, int voc2_left,
               int voc2_right) {
    if ((voc2_right - voc2_left + 1) != (voc1_right - voc1_left + 1)) {
        return false; // 長度不同不可能 Anagram
    }
    int voc1[26] = {0};
    int voc2[26] = {0};
    for (int i = voc1_left; i <= voc1_right; i++) {
        voc1[s[i] - 'a']++;
    }
    for (int i = voc2_left; i <= voc2_right; i++) {
        voc2[s[i] - 'a']++;
    }
    bool is_anagram = true;
    for (int i = 0; i < 26; i++) {
        if (voc1[i] != voc2[i]) {
            is_anagram = false;
            break;
        }
    }
    return is_anagram;
}

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
    char s[100000];
    int check_ana_num = 0;
    int longest = 0;
    scanf("%[^\n]", s);
    int i = 0;
    int voc_left_i = -1;
    int voc_right_i = -1;
    int voc_i[100000] = {0};
    int voc_i_saver = 0;
    // 記錄最大值
    while (s[i] != '\0') {
        if (voc_left_i == -1) { // 左界還沒找到
            if (s[i] != ' ') {
                voc_left_i = i;
                voc_i[voc_i_saver] = i;
                voc_i_saver++;
            }
        } else {
            if ((s[i] == ' ' && s[i - 1] != ' ') ||
                (i == strlen(s) - 1)) { // 一個單字結束
                voc_right_i = i - 1;
                voc_i[voc_i_saver] = i - 1;
                voc_i_saver++;
                longest =
                    MAX(longest,
                        (voc_right_i - voc_left_i + 1)); // 記錄最長的單字多長
            } else if (s[i] != ' ' && s[i - 1] == ' ') { // 一個單字開始
                voc_left_i = i;
                voc_i[voc_i_saver] = i;
                voc_i_saver++;
            }
        }
        i++;
    }
    printf("%d\n", longest);
    // 判斷迴文
    bool has_pali = false;
    for (int i = 0; i < voc_i_saver - 1; i += 2) {
        if (isPali(s, voc_i[i], voc_i[i + 1])) {
            has_pali = true;
            for (int j = voc_i[i]; j <= voc_i[i + 1]; j++) {
                printf("%c", s[j]);
            }
            printf(" ");
        }
    }
    if (!has_pali) {
        printf("-1");
    }
    // 判斷 Anagram
    bool anagram = false;
    for (int i = 0; i < voc_i_saver - 1; i += 2) {
        for (int j = i + 2; j < voc_i_saver - 1; j += 2) {
            if (isAnagram(s, voc_i[i], voc_i[i + 1], voc_i[j], voc_i[j + 1])){
                anagram = true;
                break;
            }
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
