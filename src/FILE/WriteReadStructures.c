#include <stdio.h>

struct person {
	char name[20];
	int age;
};

int main() {
	char *filename = "people.bin";

	// массив для записи
    struct person people[] = { {"Tom", 23}, {"Alice", 27}, {"Bob", 31}, {"Kate", 29 }};
	int size = sizeof(people[0]);
	int count = sizeof(people)/size;

	FILE *fp = fopen(filename,"w");

	size_t written = fwrite(people,size,count,fp);
	printf("Wrote %zu elements out of %d\n",written,count);
	fclose(fp);

	struct person users[count];
	fp = fopen(filename,"r");
	size_t read = fread(users,size,count,fp);
	printf("Read %zu elements\n",read);
	if(read > 0) {
		for(int i = 0; i < count; i++) {
			printf("Name: %s \t Age: %d\n",users[i].name,users[i].age);
		}
	}
	fclose(fp);
}

