#include <stdio.h>
#include <string.h>

int main() {
	char destination[30] = "Hello ";
	char source[30] = "World";
	strcat(destination,source);
	printf("%s\n",destination);
	return 0;
}
