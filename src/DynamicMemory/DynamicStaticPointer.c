#include <stdio.h>
#include <stdlib.h>

int *createPointer() {
	static int *p = NULL;
	if(p == NULL) {
		p = malloc(sizeof(int));
		*p = 1;
	}
	printf("%d \n",(*p));
	(*p)++;
	return p;
}

int main() {
	int *ptr;
	ptr = createPointer();
	ptr = createPointer();
	ptr = createPointer();
	free(ptr);
	return 0;
}

