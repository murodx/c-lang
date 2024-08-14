#include <stdio.h>
#include <stdlib.h>
#include "user.h"

// Возвращение буфера и размера данных через выходные параметрыs
extern void getUsers(struct User**, size_t*);

int main(void) {
    // Определяем указатель на полученный буфер
    struct User* buffer;
    size_t count = 0;

    // Получаем данные
    getUsers(&buffer, &count);

    // Выводим данные
    for (int i = 0; i < count; i++) {
        printf("%s - %u\n", buffer[i].name, buffer[i].age);
    }

    // Освобождаем память буфера
    free(buffer);

    return 0;
}
