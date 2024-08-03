#include <stdio.h>

struct person {
	int age;
	char name[20];
};

int main() {
	struct person tom = {23,"Tom"};
	printf("Enter name: ");
	scanf("%s", tom.name);
	printf("Enter age: ");
	scanf("%d",&tom.age);
	printf("Name:%s \t Age:%d", tom.name, tom.age);
	return 0;


}



		


