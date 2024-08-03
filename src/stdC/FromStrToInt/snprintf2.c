#include <stdio.h>
 
int main(void)
{
    int count = 3;
    double price = 79.99;
    char str [50];
    snprintf(str, sizeof str, "Count: %d \tPrice: %.2f", count, price);
    printf("%s\n", str);        // Count: 3        Price: 79.99
    return 0;
}
