#include <stdio.h>
 
int main(void)
{
    int number = 354;
    char str [10];
    snprintf(str, sizeof str, "%d", number);
    printf("Result: %s\n", str);        // Result: 354
    return 0;
}
