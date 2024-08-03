#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    // копируем 5 объектов типа int
    const int n = 5;
    int numbers[] = {1, 2, 3, 4, 5};
    int *destination = malloc(n * sizeof(int));
    if (!destination) {
        perror("Memory allocation failed");
        return EXIT_FAILURE;
    }
    memcpy(destination, numbers, n * sizeof(int));

    printf("Копированные значения:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", destination[i]);
    }
    printf("\n");

    // Вывод байтов
    printf("Байты в памяти:\n");
    unsigned char *bytePtr = (unsigned char*)destination;
    for (int i = 0; i < n * sizeof(int); i++) {
        printf("%02X ", bytePtr[i]);
    }
    printf("\n");

    free(destination);
    return 0;
}

