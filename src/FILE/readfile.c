#include <stdio.h>

int main() {
	char c;
	char *filename = "data.txt";

	FILE *fp = fopen(filename,"r");
	if(fp) {
		while((c=getc(fp))!=EOF){
			printf("%c",c);
		}
		fclose(fp);
	}
}
