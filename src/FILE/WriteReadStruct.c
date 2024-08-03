#include <stdio.h>

struct person  {
	char name[20];
	int age;
};

int main() {
	struct person tom = {"Tom",23};
	int size = sizeof(struct person);
	printf("Byte[%d]\n",size);
	FILE *fp = fopen("person.bin","w");
	size_t count = fwrite(&tom,size,1,fp);
	printf("wrote %zu elements out of %d\n",count,1);
	fclose(fp);

	struct person unknown;
	fp = fopen("person.bin","r");
	count = fread(&unknown,size,1,fp);
	if(count == 1) {
		printf("Name: %s \n",unknown.name);
		printf("Age: %d \n",unknown.age);
	}
	fclose(fp);
}
