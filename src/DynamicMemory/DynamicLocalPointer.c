#include <stdio.h>
#include <stdlib.h>

void createPointer() {
	printf("Code block starts\n"); {
	int *p = malloc(sizeof(int));
	if (!p) return;

	*p = 1;
	printf("%d \n", (*p));
	free(p);
	}
	printf("Code block ends\n");
}
int main() {
  createPointer();
  createPointer();
  createPointer();
  return 0;
}
