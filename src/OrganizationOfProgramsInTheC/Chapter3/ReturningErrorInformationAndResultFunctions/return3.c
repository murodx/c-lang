#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define USERS_NUMBER 5 // количество объектов в массиве

// структура условной базы данных
typedef struct {
    char* users[USERS_NUMBER];
} database;

// создание базы данных, инициализированной значениями из массива value
database* create_db(char* value[]) {
    database* db = malloc(sizeof(database));
    if (db == NULL) {
        return NULL;
    }
    // инициализация массива users копиями значений из value
    for (size_t i = 0; i < USERS_NUMBER; i++) {
        db->users[i] = strdup(value[i]); // создаем копию строки
        if (db->users[i] == NULL) {
            // если память не удалось выделить, освобождаем уже выделенную память и возвращаем NULL
            for (size_t j = 0; j < i; j++) {
                free(db->users[j]);
            }
            free(db);
            return NULL;
        }
    }
    return db;
}

// освобождение памяти, выделенной для базы данных
void free_db(database* db) {
    for (size_t i = 0; i < USERS_NUMBER; i++) {
        free(db->users[i]); // освобождаем память, выделенную для каждого пользователя
    }
    free(db); // освобождаем память, выделенную для структуры database
}

int main(void) {
    char* names[] = {"Tom", "Sam", "Bob", "Alice", "Kate"};
    // база данных
    database* db = create_db(names);
    if (db == NULL) {
        printf("Unable to create database\n");
        return -1;
    }

    // проверяем инициализацию базы данных
    for (size_t i = 0; i < USERS_NUMBER; i++) {
        printf("%s\n", db->users[i]);
    }

    // освобождаем память
    free_db(db);

    return 0;
}
