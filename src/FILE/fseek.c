#include <stdio.h>

void load(char *, int);
void save(char *);

int main() {
	char *filename = "data.txt";
	int position = 6;
	save(filename);
	load(filename,position);

	return 0;
}
void load(char *filename, int position){
	char buffer[256];

	FILE *fp = fopen(filename,"r");
	if(!fp) {
		printf("Error occured while opening file\n");
		return ;
	}
		fseek(fp,position,SEEK_SET);
	while((fgets(buffer,256,fp))){
		printf("%s",buffer);
	}
	fclose(fp);
}

void save(char *filename) {
	char *message = "Hello METANIT.COM!";
	FILE *fp = fopen(filename,"w");
	if(!fp) {
		printf("Error occured while openin file\n");
		return ;
	}
	fputs(message,fp);
	
	fclose(fp);
	printf("File has been written\n");
}
