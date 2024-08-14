#include <stdio.h>
#include <string.h>
#include "user.h" 
 
// условные данные
static struct User data[DATA_COUNT] = {{"Tom", 39}, {"Bob", 43}, {"Sam", 29}, {"Alice", 35}, {"Kate", 28}};
 
void getUsers(struct User* buffer)
{
    // копируем в буфер данные
    memcpy(buffer, data, DATA_COUNT * sizeof(struct User));
}