#include <stdio.h>

struct person
{
	int age;
	char *name;
};
int main(){
	struct person tom = {20,"Tom"};
	// копируем значения из структуры tom в структуру bob
	struct person bob = tom;
	bob.name = "Bob";
	printf("Name: %s \t Age: %d \n", bob.name, bob.age);
	printf("Name: %s \t Age: %d \n", tom.name, tom.age);
	return 0;
}
	
