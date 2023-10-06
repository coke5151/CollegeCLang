// 幾A幾B

#include <stdio.h>
#include <stdlib.h>

int main() {
  int a = 0, b = 0;
  int m[4] = {0}, n[4] = {0};
  for (int i = 0; i < 4; i++) {
    scanf("%d", &m[i]);
  }
  for (int i = 0; i < 4; i++) {
    scanf("%d", &n[i]);
  }
  for (int i = 0; i < 4; i++) {
    if (m[i] == n[i]) {
      a++;
    } else {
      for (int j = 0; j < 4; j++) {
        if (i != j && m[i] == n[j]) {
          b++;
        }
      }
    }
  }
  printf("%dA%dB", a, b);
  return 0;
}