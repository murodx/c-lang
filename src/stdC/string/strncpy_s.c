#include <stdio.h>
#include <string.h>
// компилятор gcc не подерживает strncpy_s поэтому пишем свою функцию
void strncpy_safe(char *dest, size_t dest_size, const char *src, size_t count) {
    if (dest_size > 0) {
        strncpy(dest, src, count);
        dest[dest_size - 1] = '\0'; // Ensure null-termination
    }
}

int main() {
    char src[] = "Hello, World!";
    char dest[20];

    // Используем strncpy_safe для копирования строки
    strncpy_safe(dest, sizeof(dest), src, sizeof(dest) - 1);

    printf("%s\n", dest);

    return 0;
}

