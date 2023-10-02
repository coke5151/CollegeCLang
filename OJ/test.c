#include <stdio.h>
#include <stdlib.h>

#define MIN(i, j) (((i) < (j)) ? (i) : (j))
#define MAX(i, j) (((i) > (j)) ? (i) : (j))

int main(){
  printf("%d", MAX(3,7));
  return 0;
}