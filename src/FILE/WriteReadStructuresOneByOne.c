#include <stdio.h>

struct person
{
	char name[20];
	int age;
};

void save(char *);
void read_by_age(char *, int);

int main() {
	char *filename = "people1.bin";
	save(filename);
	read_by_age(filename,22);
}

void save(char *filename) {
	struct person people[] = { {"Tom", 22}, {"Bob", 33}, {"Kate", 33 }, {"Alice", 22}};
	int size = sizeof(people[0]);
	int count = sizeof(people)/size;

	FILE *fp = fopen(filename,"w");
	size_t written = fwrite(people,size,count,fp);
	printf("Wrote %zu elements out of %d\n",written,count);
	fclose(fp);
}

void read_by_age(char *filename, int age){
	struct person p;
	FILE *fp = fopen(filename,"r");
	while(fread(&p,sizeof(p),1,fp) == 1){
		if(p.age == 22) {
			printf("Name: %s\t Age: %d\n",p.name,p.age);
		}
	}
	fclose(fp);
}
