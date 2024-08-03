#include <stdio.h>
#include <stdlib.h>

int *addArrays(int a[],int b[], int n) {
	int *ptr = calloc(n,sizeof(int));

	for(int i  = 0; i < n; i++)
		ptr[i] = a[i] + b[i];

	return ptr;
}

int main() {
	int a[] = {1,2,3,4,5};
	int b[] = {1,1,1,1,1};

	int n = sizeof(a)/sizeof(a[0]);
	int *ptr = addArrays(a,b,n);

	for(int i = 0; i < n; i++)
		printf("%d \t",ptr[i]);

	free(ptr);
	return 0;
}
