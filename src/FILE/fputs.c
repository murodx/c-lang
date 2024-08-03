#include <stdio.h>

int main() {
	char *message = "Hello World,\nAn apple a day keeps the doctor away";
	char *filename = "data.txt";
	FILE *fp = fopen(filename,"w");
	if(fp){
		fputs(message,fp);
		fclose(fp);
		printf("File has been written");
	}
}
