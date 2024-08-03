#include <stdio.h>
#include <stdlib.h>

int main() {
	int *ptr = malloc(sizeof(int));
	if(ptr != NULL) {
		*ptr = 24;
		printf("%d \n", *ptr);
	}
	free(ptr);
	ptr = NULL;
}
