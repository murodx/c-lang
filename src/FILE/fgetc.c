#include <stdio.h>

int main() {
	char *filename = "data.txt";
	char buffer[256];
	int line_count = 0;

	FILE *fp = fopen(filename,"r");
	if(fp) {
		while((fgets(buffer,256,fp))!=NULL){
			printf("%s",buffer);
			line_count++;
		}
		printf("\nRead %d line",line_count);
		fclose(fp);
	}
}
