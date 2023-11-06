// m474. 小賴的期中考(啊？？單字翻譯機)
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d", &a);
    if (11 <= a && a <= 19) {
        switch (a) {
        case 11:
            printf("eleven");
            break;
        case 12:
            printf("twelve");
            break;
        case 13:
            printf("thirteen");
            break;
        case 14:
            printf("forteen");
            break;
        case 15:
            printf("fifteen");
            break;
        case 16:
            printf("sixteen");
            break;
        case 17:
            printf("seventeen");
            break;
        case 18:
            printf("eighteen");
            break;
        case 19:
            printf("nineteen");
            break;
        }
    } else { // 20 <= a <= 99
        switch (a / 10) {
        case 2:
            printf("twenty");
            break;
        case 3:
            printf("thirty");
            break;
        case 4:
            printf("forty");
            break;
        case 5:
            printf("fifty");
            break;
        case 6:
            printf("sixty");
            break;
        case 7:
            printf("seventy");
            break;
        case 8:
            printf("eighty");
            break;
        case 9:
            printf("ninety");
            break;
        }

        if (a % 10 != 0) {
            switch (a % 10) {
            case 1:
                printf("-one");
                break;
            case 2:
                printf("-two");
                break;
            case 3:
                printf("-three");
                break;
            case 4:
                printf("-four");
                break;
            case 5:
                printf("-five");
                break;
            case 6:
                printf("-six");
                break;
            case 7:
                printf("-seven");
                break;
            case 8:
                printf("-eight");
                break;
            case 9:
                printf("-nine");
                break;
            }
        }
    }
    return 0;
}