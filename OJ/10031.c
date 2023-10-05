// 小馬的減肥計畫

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX(i, j) (i > j ? i : j)

int main() {
  bool debug_mode = true;
  int counter = 0;
  int n, d, mx = 0;
  int x = 0, y = 0;
  scanf("%d %d\n", &n, &d);
  int hill[n + 1];
  for (int i = 1; i <= n; i++) {
    scanf("%d", &hill[i]);
  }

  if (debug_mode) {
    printf("歡迎使用 debug mode\n");
    printf("此次測驗的 n:%d, d:%d\n", n, d);
    printf("hill[1]~hill[n]:\n\t");
    for (int i = 1; i <= n; i++) {
      printf("%d, ", hill[i]);
    }
    printf("\n");
  }

  for (int flag = 1; flag <= n; flag++) {
    counter = 0;
    x = 0;
    y = 0;

    if (debug_mode) {
      printf("flag = %d:\n", flag);
      printf("\t目前的 counter = %d, x = %d, y = %d\n", counter, x, y);
    }

    for (int i = flag; i <= n; i++) {
      if (debug_mode) {
        printf("\ti = %d\n", i);
      }
      if (i == flag) {      // 此段第一個元素
        if (hill[i] == 1) { // 上坡開頭
          x = 1;
          y = 0;
          counter++;
          if (debug_mode) {
            printf("\t\t此為 flag = %d 的開頭，目前 x = %d, y = %d, counter = "
                   "%d, mx = %d\n",
                   flag, x, y, counter, mx);
          }
        } else { // 開頭不能是下坡
          if (debug_mode) {
            printf("\t\t因為練習路段不能由下坡開始，flag = %d 的路段 break;\n",
                   flag);
          }
          break;
        }
      } else { // 第二個以後的元素
        if (hill[i] == 1) {
          if (hill[i - 1] == -1) {          // 剛剛是從下坡上來的
            if (x - d <= y && y <= x + d) { // pre_x-d <= pre_y <= pre_x+d
              x = 1;
              y = 0;
              counter++;
              if (debug_mode) {
                printf("\t\t因為 i = %d 是下坡，且當時 y "
                       "還在範圍，所以現在可以繼續\n",
                       i - 1);
                printf("\t\t目前的 x:%d, y:%d, counter:%d, mx:%d\n", x, y,
                       counter, mx);
              }
            } else { // 從前一個坡就得知現在應要下坡了，卻上坡
              if (debug_mode) {
                printf("\t\t從 i = %d 就知道 i = %d "
                       "應該要下坡，現在卻在上坡，所以 break;\n",
                       i - 1, i);
                printf("\t\t目前的 x:%d, y:%d, counter:%d, mx:%d\n", x, y,
                       counter, mx);
              }
              break;
            }
          } else {                          // 剛剛也是上坡，現在繼續
            if (x - d <= y && y <= x + d) { // pre_x-d <= pre_y <= pre_x+d
              x++;
              counter++;
              if (debug_mode) {
                printf("\t\t因為 i = %d 是上坡，而且現在繼續，且 y "
                       "在範圍內，所以通過\n",
                       i - 1);
                printf("\t\t目前的 x:%d, y:%d, counter:%d, mx:%d\n", x, y,
                       counter, mx);
              }
            } else {
              if (debug_mode) {
                printf("\t\t從 i = %d 就知道 i = %d "
                       "應該要下坡，現在卻在上坡，所以 break;\n",
                       i - 1, i);
                printf("\t\t目前的 x:%d, y:%d, counter:%d, mx:%d\n", x, y,
                       counter, mx);
              }
              break; // 從前一個坡就得知現在應要下坡了，卻上坡
            }
          }
        } else { // hill[i] == -1
          y++;
          counter++;
          if (x - d <= y && y <= x + d) { // now_x-d <= now_y <= now_x+d
            mx = MAX(mx, counter);
            if (debug_mode) {
              printf("\t\t現在下坡，且 y 在範圍內，所以 mx 會進行存檔\n");
              printf("\t\t目前的 x:%d, y:%d, counter:%d, mx:%d\n", x, y,
                     counter, mx);
            }
          } else if (y > (x + d)) {
            if (debug_mode) {
              printf("\t\t因為已經下坡太多了，所以這段只能切到這裡，break;\n");
              printf("\t\t目前的 x:%d, y:%d, counter:%d, mx:%d\n", x, y,
                     counter, mx);
            }
            break;
          } else { // y < x - d
            if (debug_mode) {
              printf("\t\t目前在下坡，但下坡量不夠，所以 counter++ 但 mx 先不記\n");
              printf("\t\t目前的 x:%d, y:%d, counter:%d, mx:%d\n", x, y,
                     counter, mx);
            }
            // continue
          }
        }
      }
    }
  }
  if(debug_mode){
    printf("**********公佈解答！！**********\n");
    printf("mx = %d\n", mx);
  } else {
    printf("%d", mx);
  }

  return 0;
}