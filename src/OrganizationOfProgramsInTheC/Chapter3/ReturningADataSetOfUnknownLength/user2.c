#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "user.h" 
 
// условные данные
static struct User data[] = {{"Tom", 39}, {"Bob", 43}, {"Sam", 29}, {"Alice", 35}, {"Kate", 28}};
 
void getUsers(struct User** buffer, size_t* count)
{
    size_t data_size = sizeof(data);
    // получаем количество структур
    *count = data_size / sizeof(struct User);
    // выделяем память для буфера
    *buffer = malloc(data_size);
    // если не удалось выделить память
    assert(*buffer!=NULL && "Unable to allocate a memory");
    // копируем в буфер данные
    memcpy(*buffer, data, data_size);
}