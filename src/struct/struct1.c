#include <stdio.h>
struct person {
	int age;
  char *name;
};
struct person2 {
	int age2;
	char *name2;
} mark;
int main() {
  // struct person
  struct person tom = {23, "Tom"};
  struct person anna = {.name = "Anna", .age = 25};
  struct person murod;
  murod.name = "Murod";
  murod.age = 19;
  printf("Age: %d \t Name: %s",murod.age,murod.name);
  printf("Age:%d \t Name: %s",tom.age,tom.name);

  // struct2
  mark = (struct person2){30,"Mark"};
  printf("Name:%s \t Age: %d", mark.name2, mark.age2);
	return 0;
}
