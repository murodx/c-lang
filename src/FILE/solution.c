#include <stdio.h>

int main() {
	FILE *fp;
	char fname[20];
	printf("Enter file name:");
	scanf("%20s",fname);
	fp=fopen(fname,"w");
	if(!fp) {
		printf("Error");
		return 1;
	}
	printf("File create successfully.");
	fclose(fp);
	return 0;
}

