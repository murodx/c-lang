#include <stdio.h>


struct person {
	char *name;
	int age;
};

void change_person(struct person *user)
{
	user->age = user->age+1;
}
int main(void){
	struct person bob = {"Bob",34};
	printf("Before change. %s : %d \n", bob.name, bob.age);
	change_person(&bob);
	printf("After change. %s: %d \n", bob.name, bob.age);
	return 0;
}
