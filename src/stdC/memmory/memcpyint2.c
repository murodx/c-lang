#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main(void)
{
    // копируем 5 объектов типа int
    const int n = 5;
    int numbers[] = {1, 2, 3, 4, 5};
    int *destination = malloc(n * sizeof(int));
    memcpy(destination, numbers, n * sizeof(int));
 
    for (int i = 0; i < n; i++)
    {
        printf("%d ", destination[i]);
    }
    free(destination);
    return 0;
}
