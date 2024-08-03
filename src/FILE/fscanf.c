#include <stdio.h>

int main() {
	char *filename = "users.dat";
	char name[20];
	int age;
	FILE *fp = fopen(filename,"r");
	if(!fp) {
		printf("Error occured while opening file\n");
		return 1;
	}
	while((fscanf(fp,"%s %d",name,&age))!=EOF)
	{
		printf("%s %d\n",name,age);
	}
	fclose(fp);
	return 0;
}
