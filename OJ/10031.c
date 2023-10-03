// 小馬的減肥計畫

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX(i, j) (i > j) ? i : j

int main() {
  int n, d, mx = 0, counter = 0;
  int x = 0, y = 0; // x: 此段已爬幾個上坡 ; y: 此段已過幾個下坡
  bool needdown = false;
  bool justslide = false;

  scanf("%d %d\n", &n, &d);
  int hill[n + 1];
  for (int i = 1; i <= n; i++) {
    scanf("%d", &hill[i]);
  }
  // printf("n:%d, d:%d\n", n, d);

  for (int flag = 1; flag <= n; flag++) { // 檢查第 flag 個當頭的組合
    // printf("flag = %d:\n", flag);
    counter = 0;
    needdown = false;
    justslide = false;
    x = 0;
    y = 0;
    for (int i = flag; i <= n; i++) {
      // printf("i = %d:\n", i);
      if (i == flag) { // 這段的開頭
        // printf("現在是這段的開頭…\n");
        if (hill[i] == -1) { // 開頭不能是下坡，跳過
          // printf("因為開頭不能是下坡，跳過！\n");
          break;
        } else { // 開頭上坡
          // printf("太棒了開頭是上坡！\n");
          x = 1;
          y = 0;
          counter++;
          mx = MAX(mx, counter);
          // printf("現在的 mx:%d\n", mx);
        }
      } else { // 不是這段的開頭
        // printf("現在開始處理開頭後面的東西！\n");
        if (hill[i] == 1) {
          if (justslide) { // 剛剛才從下坡上來，而且不需下坡了
            justslide = false;
            x = 0;
          }
          if ((x - d) > 0) { // 已經需要下坡了
            // printf("現在的 x:%d，已經需要下坡嘍！\n", x);
            needdown = true;
          }
          if (i == n) { // 因已經是結尾，現在是上坡的話這次直接不計
            break;
          }
          // printf("現在的動作是上坡！\n");
          x++;
          y = 0;
          if (needdown) { // 需要下坡竟然還上坡
            // printf("就說要下坡了，還上坡！\n");
            // printf("現在的 mx:%d\n", mx);
            break;
          }
          counter++;
          mx = MAX(mx, counter);
          // printf("現在的 mx:%d\n", mx);
        } else { // 下坡
          // printf("現在的動作是下坡！\n");
          y++;
          if ((x - d) <= y && y <= (x + d)) { // 有下坡，而且在範圍內
            // printf("現在的 y 是: %d，你好棒還在範圍內\n", y);
            needdown = false;
            justslide = true;
          } else if (y > (x + d)) { // 下坡過長
            // printf("欸不是這麼長的下坡，還敢偷懶啊ㄏㄚˋ\n");
            // printf("現在的 mx:%d\n", mx);
            break;
          }
          counter++;
          mx = MAX(mx, counter);
          // printf("現在的 mx:%d\n", mx);
        }
      }
    }
  }
  printf("%d", mx);
  return 0;
}