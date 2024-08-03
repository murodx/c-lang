#include <stdio.h>
#include <stdlib.h>

int main() {
	int *ptr = calloc(1,sizeof(int));
	if(ptr) {
		printf("Initial value: %d \n", *ptr);
		*ptr = 15;
		printf("New value: %d \n", *ptr);
	}
	free(ptr);
	return 0;
}
