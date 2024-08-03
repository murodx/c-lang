#include <stdio.h>

union ascii {
	int digit;
	char letter;
};
int main() {
	union ascii code;
	code.digit = 120;
	printf("%d -  %c \n",code.digit, code.letter);
	printf("%d - %d \n",code.digit , code.letter);
	code.letter = 87;
	printf("%d  - %c \n", code.digit,code.letter);
	code.letter = 98;
	printf("%d - %c \n", code.digit, code.letter);

	return 0;

}


