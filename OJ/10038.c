// ROR指令

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, counter = 0;
  unsigned int k, temp;
  scanf("0x%x\n%d", &k, &n);
  temp = k;
  while (temp != 0) {
    counter++;
    temp /= 2;
  }

  int arr[32];
  int trans_short[n], trans_long[32 - n];
  int ans[32];
  temp = k;
  for (int i = 32 - 1; i >= counter; i--) {
    arr[i] = temp % 2;
    temp /= 2;
  }

  // printf("native:\n");
  // for (int i = 0; i < counter; i++) {
  //   printf("%d", arr[i]);
  // }
  // printf("\n");

  int j = 0;
  for (int i = 32 - 1; i >= 32 - 1 - n; i--) {
    trans_short[n - 1 - j] = arr[i];
    j++;
  }
  // printf("trans_short:\n");
  // for (int i = 0; i < n; i++) {
  //   printf("%d", trans_short[i]);
  // }
  // printf("\n");
  // printf("arr[i]:\n");
  j = 0;
  for (int i = 32 - 1 - n; i >= 0; i--) {
    // printf("%d", arr[i]);
    trans_long[32 - 1 - n - j] = arr[i];
    j++;
  }

  // printf("trans_long:\n");
  // for (int i = 0; i < counter - n; i++) {
  //   printf("%d", trans_long[i]);
  // }
  // printf("\n");

  j = 0;
  for (int i = 0; i < n; i++) {
    ans[j] = trans_short[i];
    j++;
  }
  for (int i = 0; i < 32 - n; i++) {
    ans[j] = trans_long[i];
    j++;
  }

  // ROR complete

  k = 0;
  for (int i = 0; i < 32; i++) {
    k += (ans[i] * pow(2, 32 - 1 - i));
  }
  printf("%x", k);
  // char hexdic[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a',
  // 'b', 'c', 'd', 'e', 'f'};

  return 0;
}