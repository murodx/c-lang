#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "user.h" 
 
// условные данные
static struct User data[] = {{"Tom", 39}, {"Bob", 43}, {"Sam", 29}, {"Alice", 35}, {"Kate", 28}};
 
struct UsersList getUsers()
{
    // определяем результат
    struct UsersList result;
    // общее количество данных в байтахs
    size_t data_size = sizeof(data);
    // получаем количество структур
    result.count = data_size / sizeof(struct User);
    // выделяем память для буфера
    result.buffer = malloc(data_size);
    // если не удалось выделить память
    assert(result.buffer!=NULL && "Unable to allocate a memory");
    // копируем в буфер данные
    memcpy(result.buffer, data, data_size);
    // возвращаем структуру
    return result;
}