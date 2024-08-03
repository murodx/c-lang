#include <stdio.h>
#include <stdlib.h>

int main() {
	int n = 4;
	int *ptr = calloc(n,sizeof(int));
	if(ptr) {
		ptr[0] = 1;
		ptr[1] = 2;
		ptr[2] = 3;
		ptr[3] = 5;

		for(int i = 0; i < n; i++) {
			printf("%d", ptr[i]);
		}
	}
	free(ptr);
	return 0;
}
	
