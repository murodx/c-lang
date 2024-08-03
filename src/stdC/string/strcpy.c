#include <stdio.h>
#include <string.h>
 
int main(void)
{
    char destination[20];
    char source[20] = "Hello World";
    strcpy(destination, source);
    printf("%s\n", destination);    // Hello METANIT.COM
    return 0;
}
