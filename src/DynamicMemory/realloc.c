#include <stdio.h>
#include <stdlib.h>

int main() {
	int size = sizeof(int);
	int *ptr = malloc(size);
	if(ptr) {
		printf("Addresses: %p \t Size: %d\n",(void*)ptr,size);
	}
	size = 4 * sizeof(int);
	int *ptr_new = realloc(ptr,size);
	if(ptr_new) {
		printf("Reallocation\n");
		printf("Addresss: %p \t Size: %d\n", (void*)ptr_new, size);
		free(ptr_new);
	}
	else {
		free(ptr);
	}
}
