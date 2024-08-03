#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    const char * str = "24 flowers";
    char* str_end;
    long result = strtol(str, &str_end, 10);
    printf("Result: %ld\n", result);                // Result: 24
    printf("Rest of the string:%s\n", str_end);     // Rest of the string: flowers
    return 0;
}
