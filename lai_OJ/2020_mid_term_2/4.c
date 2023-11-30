// 小賴的期中作業2020篇第二次期中考(句子來囉)
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool is_alpha(char c) { return ('a' <= c && c <= 'z'); }
bool is_conn(char c) { // can't、nice-look 之類的連接符號
    return (c == '\'' || c == '-');
}

int main() {
    char input[1000];
    scanf("%[^\n]", input);
    int voc_n = 0, alpha_sum = 0;
    for (int i = 0; i < strlen(input); i++) {
        if (is_alpha(input[i]) || is_conn(input[i])) {
            alpha_sum++;
            if (i > 0) {
                if (!is_alpha(input[i - 1]) && !is_conn(input[i - 1])) {
                    voc_n++;
                }
            } else if (i == 0) {
                voc_n++;
            }
        }
    }
    printf("number of word: %d\n", voc_n);
    float ans = (float)alpha_sum / (float)voc_n * 100;
    int ans_int = round(ans);
    ans = (float)ans_int / 100;
    printf("average world length: %.2f", ans);
    return 0;
}