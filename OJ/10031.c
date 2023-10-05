// 小馬的減肥計畫

#include <stdio.h>
#include <stdlib.h>

#define MAX(i, j) (i > j ? i : j)

int main() {
  int counter = 0;
  int n, d, mx = 0;
  int x = 0, y = 0;
  scanf("%d %d\n", &n, &d);
  int hill[n + 1];
  for (int i = 1; i <= n; i++) {
    scanf("%d", &hill[i]);
  }

  for (int flag = 1; flag <= n; flag++) {
    counter = 0;
    x = 0;
    y = 0;
    for (int i = flag; i <= n; i++) {
      if (i == flag) {      // 此段第一個元素
        if (hill[i] == 1) { // 上坡開頭
          x = 1;
          y = 0;
          counter++;
        } else { // 開頭不能是下坡
          break;
        }
      } else { // 第二個以後的元素
        if (hill[i] == 1) {
          if (hill[i - 1] == -1) {          // 剛剛是從下坡上來的
            if (x - d <= y && y <= x + d) { // pre_x-d <= pre_y <= pre_x+d
              x = 1;
              y = 0;
              counter++;
            } else { // 從前一個坡就得知現在應要下坡了，卻上坡
              break;
            }
          } else {                          // 剛剛也是上坡，現在繼續
            if (x - d <= y && y <= x + d) { // pre_x-d <= pre_y <= pre_x+d
              x++;
              counter++;
            } else {
              break; // 從前一個坡就得知現在應要下坡了，卻上坡
            }
          }
        } else { // hill[i] == -1
          y++;
          counter++;
          if (x - d <= y && y <= x + d) { // now_x-d <= now_y <= now_x+d
            mx = MAX(mx, counter);
          } else if (y > (x + d)) {
            break;
          } else {
            // continue
          }
        }
      }
    }
  }
  printf("%d", mx);
  return 0;
}