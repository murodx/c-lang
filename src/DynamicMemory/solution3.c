#include <stdio.h>
#include <stdlib.h>


int main() {
	int n = 3;
	long *p_long = calloc(n,sizeof(long));
	if(p_long) {
		for(int i = 0; i < 3; i++) {
			p_long[i] = i + 1;
			printf("p_long[%d] %ld\n",i,p_long[i]);
		}
	}
	int m = 5;
	long *new_p_long = realloc(p_long,m);
	if(new_p_long) {
		for(int i = n; i < m; i++) {
			new_p_long[i] = i + 1;
			printf("new_p_long[%d] %ld\n",i,new_p_long[i]);
		}
		free(new_p_long);
	} else {
		free(p_long);
	}
}


	
