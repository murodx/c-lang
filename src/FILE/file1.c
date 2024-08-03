#include <stdio.h>

int main() {
	FILE *fp = fopen("data.txt","w");
	if(fp == NULL) {
		perror("Error occured while opening data28.txt");
		return 1;
	}
	else 
		printf("All is good");
	fclose(fp);
	return 0;
}
