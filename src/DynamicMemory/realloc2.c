#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    int size = sizeof(int);
    int *ptr = malloc(size);
    if(ptr)
    {
        printf("Addresss: %p \t Allocated: %d\n", (void*)ptr, size);
    }
    size = 4 * sizeof(int);
    ptr = realloc(ptr, size);   // используем старый указатель
    if(ptr)
    {
        printf("Reallocation\n");
        printf("Addresss: %p \t Allocated: %d\n", (void*)ptr, size);
    }
    free(ptr);
}
