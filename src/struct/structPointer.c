#include <stdio.h>

struct person
{
	int age;
	char name[20];
};

int main() {
	struct person kate = {28,"Kate"};
	struct person *p_kate = &kate;

	char *name = p_kate->name;
	int age = (*p_kate).age;

	printf("name= %s \t age= %d \n", name, age);

	p_kate->age = 32;
	printf("name= %s \t age= %d \n", name, age);
	return 0;
}
		
