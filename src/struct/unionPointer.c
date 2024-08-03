#include <stdio.h>
union ascii {
	int digit;
	char letter;
};

int main() {
	union ascii code = {45};
	union ascii *p_code = &code;
	printf("%d\n",p_code->digit);
	p_code->digit = 89;
	printf("%d\n",code.digit);
	return 0;
}
	
