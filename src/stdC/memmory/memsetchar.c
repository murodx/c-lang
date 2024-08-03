#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // выделяем блок памяти для 5 чисел int
    int m = 5;                  // количество элементов
    int n = m * sizeof(int);    // размер выделяемой памяти
    int *ptr = malloc(n);
    if (ptr)
    {
        // иницилизируем все байты нулями
        memset(ptr, 0, n);
        
        // проверяем инициализацию как int
        for (int i = 0; i < m; i++)
        {
            printf("%d ", ptr[i]);
        }
        printf("\n");
        
        // проверяем инициализацию побайтово
        unsigned char *byte_ptr = (unsigned char *)ptr;
        for (int i = 0; i < n; i++)
        {
            printf("%d ", byte_ptr[i]);
        }
        printf("\n");
    }
    free(ptr);
    return 0;
}

