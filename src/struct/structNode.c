#include <stdio.h>

struct node
{
	char *value;
	struct node* next;
};

int main() {
	struct node kate = {.value="Kate"};
	struct node tom = {.value="Tom"};
	struct node bob = {.value="Bob"};

	kate.next = &tom;
	tom.next = &bob;

	struct node *pointer = &kate;
	while(pointer!=NULL){
		printf("value=%s \n", pointer->value);
		pointer = pointer->next;
	}
	return 0;

}
