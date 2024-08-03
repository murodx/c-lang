#include <stdio.h>

int main() {
	FILE *fp = fopen("test.txt","r");
	if(!fp) {
		printf("Error occured while opening file\n");
		return -1;
	}

	fseek(fp,0,SEEK_END);
	long size = ftell(fp);
	fclose(fp);

	printf("File size %ld bytes\n",size);

}


