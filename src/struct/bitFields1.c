#include <stdio.h>

struct point {
	unsigned int x:5;
	unsigned int y:3;
};

int main() {
	struct point center = {0,5};
	center.x = 30;
	printf("x=%d  y=%d \n",center.x, center.y);
	return 0;
}
