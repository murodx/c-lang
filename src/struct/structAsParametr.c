#include <stdio.h>
struct person{
	char *name;
	int age;
};
typedef struct {
	struct person work;
	char *job;
} worker;
// (struct person user)
void print_person(worker user){
	printf("Name: %s \n", user.work.name);
	printf("Age: %d \n", user.work.age);
    printf("Job: %s \n", user.job);
}
int main(){
	struct person tom = {.name="Tom", .age=24};
	worker bob = { .work = {.name="Bob",.age=35}, .job="Developer"};
	print_person(bob);
	// print_person(tom);
	return 0;
}

