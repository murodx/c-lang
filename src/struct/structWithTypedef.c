#include <stdio.h>
typedef struct{
	int age;
	char *name;
}person;

int main(void){
	person tom = {23,"Tom"};
	printf("Name:%s \t Age: %d", tom.name, tom.age);

	return 0;
}
