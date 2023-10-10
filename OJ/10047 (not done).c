// 分析句子

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX(i, j) ((i > j) ? i : j)

bool isloop(char *str, int n) {
  int temp = n;
  int i = 0;
  bool result = true;
  char *j = str;
  char string[160];
  while (temp--) {
    string[i] = *j;
    i++;
    j = j + 1;
  }

  for (int i = 0; i < n / 2; i++) {
    if (string[i] == string[n - i - 1]) {
      result = true;
    } else { // 左右不對稱
      result = false;
      break;
    }
  }
  return result;
}

int main() {
  int num_of_voc = 0;
  int mx = 0;
  int size = 0;
  int len = 0;
  int length_of_voc[160] = {0};

  char *str[160];
  char raw[160];

  scanf("%[^\n]", raw); // 讀取，直到遇到 \n
  char delim[] = " ";   // 用空格分割

  char *token = strtok(raw, delim);
  while (token != NULL) {
    num_of_voc++;
    mx = MAX(mx, strlen(token));

    str[len] = &raw[size];
    strcpy(str[len], token);

    length_of_voc[len] = strlen(token);
    size += strlen(token) + 1;
    len++;

    token = strtok(NULL, delim);
  } // 計算出 num_of_voc 為單字總數，mx 為最大單字長度

  bool firstprint = true;
  printf("%d\n%d\n", num_of_voc, mx);
  for (int i = 0; i < num_of_voc; i++) {
    if (isloop(str[i], length_of_voc[i])) {
      if (firstprint) {
        printf("%s", str[i]);
        firstprint = false;
      } else {
        printf(" %s", str[i]);
      }
    }
  }

  return 0;
}