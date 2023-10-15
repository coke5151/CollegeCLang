#include <stdio.h>
#include <string.h>
int main() {
    char temp1[81];
    char word[81];
    char ans[81];
    int count = 0;
    int countans = 0;
    int max = 0;
    int space = 0;
    int key = 0;
    gets(temp1);
    for (int i = 0; i < strlen(temp1); i++) {
        count++;
        if (temp1[i] == ' ') {
            space++;
            count = 0;
            continue;
        }
        if (count > max) {
            max = count;
        }
    }
    count = 0;
    printf("%d\n", space + 1);
    printf("%d\n", max);

    for (int i = 0; i < strlen(temp1); i++) {
        if (temp1[i] == ' ' && count != 1) {
            for (int j = 0; j < count; j++) {
                if (word[j] != word[count - 1 - j]) {
                    key = 0;
                    break;
                }
                key = 1;
            }
            if (key == 1) {
                for (int m = 0; m < count; m++) {
                    ans[countans] = word[m];
                    countans++;
                }
                ans[countans] = ' ';
                countans++;
                key = 0;
            }
            count = 0;
            continue;
        }
        word[count] = temp1[i];
        count++;
        if (i == strlen(temp1) - 1 && count != 1) {
            for (int j = 0; j < count; j++) {
                if (word[j] != word[count - 1 - j]) {
                    key = 0;
                    break;
                }
                key = 1;
            }
            if (key == 1) {
                for (int m = 0; m < count; m++) {
                    ans[countans] = word[m];
                    countans++;
                }
                ans[countans] = ' ';
                countans++;
                key = 0;
            }
        }
    }
    for (int i = 0; i < countans - 1; i++) {
        printf("%c", ans[i]);
    }
    return 0;
}