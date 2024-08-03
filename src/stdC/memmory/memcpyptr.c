#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main(void)
{
    char source[] = "Hello World";
    // копируем 5 байт
    int n = 5;
    char *destination = malloc(n);
    memcpy(destination, source, n);
 
    for (int i = 0; i < n; i++)
    {
        printf("%c", destination[i]);
    }
    free(destination);
    return 0;
}
