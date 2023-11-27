// 小賴的期中作業2020篇第二次期中考(句子來囉)
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool is_alpha(char c) { return ('a' <= c && c <= 'z'); }

int main() {
    char input[1000];
    scanf("%s", input);
    int voc_n = 1, alpha_sum = 0;
    for (int i = 0; i < strlen(input); i++) {
        if (is_alpha(input[i])) {
            printf("a");
            alpha_sum++;
            if (i > 0) {
                if (!is_alpha(input[i - 1])) {
                    printf("b");
                    voc_n++;
                }
            }
        }
    }
    printf("number of word: %d\n", voc_n);
    printf("average world length: %.2f", (float)alpha_sum / (float)voc_n);
    return 0;
}