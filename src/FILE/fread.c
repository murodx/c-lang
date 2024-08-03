#include <stdio.h>

int main() {
	int N = 20;
	char str[N];

	FILE *fp = fopen("data.txt","r");
	size_t count = fread(str,sizeof str[0],N,fp);
	printf("read %zu elements out of %d\n",count,N);
	printf("%s",str);
	fclose(fp);
}
