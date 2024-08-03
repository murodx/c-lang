#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    const char * str = "24 flowers";
    long result = strtol(str, NULL, 10);
    printf("Result: %ld\n", result);    // Result: 24
    return 0;
}
