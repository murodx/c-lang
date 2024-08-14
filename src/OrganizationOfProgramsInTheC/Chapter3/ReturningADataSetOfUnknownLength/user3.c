#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "user.h" 
 
// условные данные
static struct User data[] = {{"Tom", 22}, {"Bob", 43}, {"Sam", 29}, {"Alice", 35}, {"Kate", 28}};
 
size_t getUsers(struct User** buffer)
{
    size_t data_size = sizeof(data);
    // получаем количество структур
    size_t count = data_size / sizeof(struct User);
    // выделяем память для буфера
    *buffer = malloc(data_size);
    // если не удалось выделить память
    assert(*buffer!=NULL && "Unable to allocate a memory");
    // копируем в буфер данные
    memcpy(*buffer, data, data_size);
    // в качестве результата возвращаем количество структур
    return count;
}