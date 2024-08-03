#include <stdio.h>

int main() {
		char *filename1 = "data.txt";
		char *filename2 = "data2.txt";
		char buffer[256];
		FILE *fp1 = fopen(filename1,"r");
		FILE *fp2 = fopen(filename2,"w");
		if(!fp1 || !fp2) {
			printf("Error occured while opening file\n");
		}
		else {
			while((fgets(buffer,256,fp1)) != NULL){
				fputs(buffer,fp2);
				printf("%s",buffer);
			}
		}
		fclose(fp1);
		fclose(fp2);
		return 0;
}

