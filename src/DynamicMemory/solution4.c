#include <stdio.h>
#include <stdlib.h>

int main() {
  int *block;
  int n;
  printf("Size of array=");
  if (scanf("%d", &n) != 1) {
    printf("Invalid Input\n");
    return 1;
  }
  block = calloc(n, sizeof(int));
  if (!block) {
    printf("memory allocation failed\n");
    return 1;
  }
  for (int i = 0; i < n; i++) {
    printf("block[%d]=", i);
    scanf("%d", &block[i]);
  }
  for (int i = 0; i < n; i++) {
    printf("block[%d]\n", block[i]);
  }
  free(block);
  return 0;
}
