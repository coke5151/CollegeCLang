// 小賴的期中作業2020篇第二次期中考(句子來囉)
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool is_alpha(char c) {
    return ('a' <= c && c <= 'z') || (c == '\'' || c == '-');
}

void printf_voc(char a[], int start_i, int end_i) {
    for (int i = start_i; i <= end_i; i++) {
        printf("%c", a[i]);
    }
}

int main() {
    char input[1000] = {0};
    int voc_i[1000] = {0};
    int voc_i_saver = 0;
    scanf("%[^\n]", input);
    int mx = 0; // 最長單字長
    int voc_left_i = -1, voc_right_i = -1;
    int ans_left_i = -1, ans_right_i = -1;
    for (int i = 0; i < strlen(input); i++) { // 到句尾前一個（不含句號…）
        if (voc_left_i == -1) {               // 還沒找到第一個左界
            if (input[i] != ' ') {
                voc_left_i = i;
                voc_i[voc_i_saver] = i;
                voc_i_saver++;
            }
        } else {
            if ((input[i] == ' ' || i == strlen(input) - 1) &&
                input[i - 1] != ' ') { // 截到一個單字
                voc_right_i = i - 1;
                voc_i[voc_i_saver] = i - 1;
                voc_i_saver++;
                if (mx < (voc_right_i - voc_left_i + 1)) {
                    mx = voc_right_i - voc_left_i + 1;
                    ans_left_i = voc_left_i;
                    ans_right_i = voc_right_i;
                }
            } else if (input[i] != ' ' && input[i - 1] == ' ') { // 一個單字開始
                voc_left_i = i;
                voc_i[voc_i_saver] = i;
                voc_i_saver++;
            }
        }
    }
    // 輸出
    bool first_print = true;
    for (int i = voc_i_saver - 1; i >= 0; i -= 2) {
        if (!first_print) {
            printf(" ");
        }
        printf_voc(input, voc_i[i - 1], voc_i[i]);
        first_print = false;
    }
    printf("%c\n", input[strlen(input) - 1]);
    for (int i = ans_left_i; i <= ans_right_i; i++) {
        printf("%c", input[i]);
    }
    return 0;
}