#include <stdio.h>

struct color;
struct rectangle { 
	struct color*  background;
	unsigned width;
	unsigned height;
};

struct color {
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
};

int main() {
	struct color backgroundColor = {255,0,0,125};
	struct rectangle rect = { .width=100,.width=50, .background=&backgroundColor};
	printf("Rectangle color: %d %d %d",
			rect.background->red,
			rect.background->green,
			rect.background->blue);
	return 0;
}
