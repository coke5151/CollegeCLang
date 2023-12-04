// 小賴的期中作業2023篇第二次期中考(重覆位數)
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d", &n);
    bool repeat = false;
    bool nums[10] = {0}; // 0~9 數字有沒有用過
    while(n!=0){
        if(nums[n%10]){
            repeat = true;
            break;
        } else {
            nums[n%10] = true;
        }
        n/=10;
    }
    if(repeat){
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}