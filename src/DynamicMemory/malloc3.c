#include <stdio.h>
#include <stdlib.h>

struct person { 
	char *name;
	int age;
};

int main() {
	struct person *ptr = malloc(sizeof(struct person));
	if(ptr) {
		ptr->name = "Tom";
		ptr->age = 38;


		printf("%s : %d \n",ptr->name, ptr->age);
	}
	free(ptr);
	return 0;
}
