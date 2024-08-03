#include <stdio.h>
struct person {
	char *name;
	int age;
};

struct person create_person(char *name, int age){
	struct person user;
	user.name =  name;
	user.age = age;
	return user;
}
int main(){
	struct person bob = create_person("Bob",22);
	printf("Name: %s \n", bob.name);
	printf("Age: %d \n", bob.age);
	return 0;
}

