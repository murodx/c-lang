#include <stdio.h>
#include <string.h>

int main() {
	char destination[20];
	char source[20] = "Hello World";
	int n = 20;
	strncpy(destination,source,20);
	destination[n-1] = '\0';
	printf("%s\n", destination);
	return 0;
}
