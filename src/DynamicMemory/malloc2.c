#include <stdio.h>
#include <stdlib.h>

int main() {
	int n = 4;
	int *ptr = malloc(n * sizeof(int));
	if(ptr) {
		ptr[0] = 1;
		ptr[1] = 2;
		ptr[2] = 3;
		ptr[3] = 4;
     	for(int i = 0; i < n; i++) {
	    	printf("%d \n",ptr[i]);
    	}
		for(int *p = ptr; p < ptr + n; p++) {
			printf("%d \n", *p);
		}
	}
	free(ptr);
	return 0;
}

