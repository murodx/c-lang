#include <stdio.h>
#include <stdlib.h>
#include "user.h"
 
// Возвращение буфера и размера данных через результат функции
extern struct UsersList getUsers();
 
int main(void)
{
  // получаем данные
  struct UsersList result = getUsers();
 
  // работа с полученными данными
  for(int i =0; i < result.count; i++)
  {
    printf("%s - %u\n", result.buffer[i].name, result.buffer[i].age);
  }
    
  free(result.buffer); // освобождаем память буфера
}