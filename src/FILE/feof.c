#include <stdio.h>

int main() {
	int N = 20;
	char str[N];

	FILE *fp = fopen("data.txt","r");
	int count = fread(str,sizeof str[0],N,fp);
	if(count == N) {
		printf("%s",str);
	}
	else {
		if(feof(fp)){
			printf("Unexpected end of file\n");
			printf("Available: %s",str);
		}
		else if(ferror(fp))
			perror("Error while reading file\n");
	}
	fclose(fp);
}
