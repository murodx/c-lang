#include <stdio.h>

int main() {
	char message[] = "Hello World";
	char *filename = "data.txt";

	int n = sizeof(message)/sizeof(message[0]);

	FILE *fp = fopen(filename,"w");
	if(fp) {
		for(int i = 0; i < n; i++) {
			putc(message[i],fp);
		}
		fclose(fp);
		printf("File has been written\n");
		return 0;
	}
}
