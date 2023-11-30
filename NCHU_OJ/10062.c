// 檔名大挑戰
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char s[81];
    scanf("%s", s);
    int lengh = strlen(s);
    if(s[lengh-2] == '.' && s[lengh-1] == 'c'){
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}