#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
 
#define USERS_NUMBER 5      // количество объектов в массиве
 
// структура условной базы данных
typedef struct
{
    char* users[USERS_NUMBER];
} database;
 
 
int find(database* db, char*);
 
database* create_db(char*);
 
int main(void){
     
    // база данных
    database* db = create_db("Tom");
    if(db == NULL) 
    {
        printf("Unable to create database\n");
        return -1;
    }
 
    // проверяем инициализацию базы данных
    for(size_t i =0; i < USERS_NUMBER; i++)
    {
        printf("%s\n", db->users[i]);
    }
    // освобождаем память
    free(db);
}      
// создание базы данных, инициализированной значением value
database* create_db(char* value)
{
    database* db = 0;
    // если значение value передано и память выделена
     if(value && (db = malloc(sizeof(database))))
    {
        // инициализация массива users начальным значением value
        for(size_t i =0; i < USERS_NUMBER; i++)
        {
            db->users[i] = value;
        }
    }
    return db;
}