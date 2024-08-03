#include <stdio.h>

struct company {
	char *name;
	char *country;
};
struct phone {
	char *title;
	int price;
	struct company manufacturer;
};

int main() {
	struct phone realmeC31;
	realmeC31.title = "Realme C31";
	realmeC31.price = 7900;
	realmeC31.manufacturer.name = "Realme";
	realmeC31.manufacturer.country = "Chine";

	printf("Phone: %s \n", realmeC31.title);
	printf("Price: %d \n", realmeC31.price);
	printf("Manufacturer: %s \n", realmeC31.manufacturer.name);
	return 0;

}
