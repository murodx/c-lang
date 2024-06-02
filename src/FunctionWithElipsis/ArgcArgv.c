#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Количество аргументов командной строки: %d\n", argc);

    printf("Аргументы командной строки:\n");
    for(int i = 0; i < argc; i++) {
        printf("Аргумент %d: %s\n", i, argv[i]);
    }

    return 0;
}
