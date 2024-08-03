#include <stdio.h>

enum operation {
	ADD,
	SUBTRACT,
	MULTIPLY
};

int main() {
	enum operation op;
	op = MULTIPLY;
	printf("Operation: %d\n", op);
	return 0;

}
