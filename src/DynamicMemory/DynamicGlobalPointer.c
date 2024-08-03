#include <stdio.h>
#include <stdlib.h>

int *p = NULL;
void createPointer()
{
	printf("%d \n",(*p));
	(*p)++;
}
int main() { 
	p = malloc(sizeof(int));
	*p = 1;
	createPointer();
	createPointer();
	createPointer();

	free(p);
	return 0;
}
