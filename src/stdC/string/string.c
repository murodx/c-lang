#include <stdio.h>
#include <string.h>

int main() {
	const char str[] = "Hello";
	size_t length = strlen(str);
	printf("String length: %zu \n",length);
	return 0;
}
