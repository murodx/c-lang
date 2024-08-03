#include <stdio.h>
#include <string.h>

int main() {
	const char *str1 = "Hello";
	const char *str2 = "Hello";
	int result = strcmp(str1,str2);
	if(result == 0) {
		printf("string are equal \n");
	}
	else {
		printf("String are not equal \n");
	}
	return 0;
}
