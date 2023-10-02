// 你比花瓣還美

#include <stdio.h>
#include <stdlib.h>

int main(){
  int n;
  int sum = 0;
  scanf("%d", &n);
  int flowers[n];
  for(int i=0;i<n;i++){
    scanf("%d", &flowers[i]);
  }

  sum = n; // 每一朵花的獨拍照都會滿足計數
  for (int i = 2; i < n; i++) { // 從兩朵花以上的照片開始計，最多 n 朵花大合照
    for(int j=0;j+i<n;j++){ // 移動區間
      
    }
  }
  return 0;
}