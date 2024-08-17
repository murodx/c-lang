#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "database.h" 
  
#define DATA_MAX_COUNT 5   // максимальное количество данных в условной базе данных
#define CON_MAX_COUNT 4 // максимальное количество подключений
 
// база данных - структура представляет разделяемое состояние
struct Database{
    size_t id;                     // индекс подключения
    char* data[DATA_MAX_COUNT];// условные данные
};
// подключение - структура для управления состоянием
struct Connection
{
  struct Database* db;  // подключение
  size_t count;            // количество обратившийся клиентов
};
// пул подключений
static struct Connection pool[CON_MAX_COUNT];
 
// открытие условной базы данных
struct Database* openDatabase(size_t id)
{
  // проверяем индекс базы данных
  assert(id<CON_MAX_COUNT && "Invalid database id");
  // если еще нет клиентов, которые обращаются к бд
  // значит база данных отсутствует, и ее надо создать
  if(pool[id].count==0) 
  {
    pool[id].db =  malloc(sizeof(struct Database)); // создаем базу данных
    pool[id].db->id = id;   // устанавливаем индекс подключения
  }
  pool[id].count++;     // увеличиваем счетчик клиентов
  return pool[id].db;   // возвращаем указатель на базу данных
}
// удаляем базу данных
void closeDatabase(struct Database* db)
{
  pool[db->id].count--;     // уменьшаем счетчик клиентов
  if(pool[db->id].count == 0)   // если клиентов больше нет
  {
    free(db);         // то освобождаем память
  }
}
// изменяем данные
void setUser(struct Database* db, size_t index, char* name)
{
    if(index < DATA_MAX_COUNT)
      db->data[index]=name;
    else
        printf("User not found\n");
}
// выводим данные на консоль
void printUsers(struct Database* db)
{
    for(size_t i = 0; i < DATA_MAX_COUNT; i++)
    {   
        if (db->data[i] != NULL) {
            printf("%s\n", db->data[i]);
        }
    }
}
