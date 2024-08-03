#include <stdio.h>

int main() {
	char str[] = "Hello World";
	size_t N = sizeof(str);
	FILE *fp = fopen("data.txt","w");
	size_t count = fwrite(str,sizeof str[0],N,fp);
	printf("wrote %zu elements out of %zu \n",count,N);
	fclose(fp);
}
