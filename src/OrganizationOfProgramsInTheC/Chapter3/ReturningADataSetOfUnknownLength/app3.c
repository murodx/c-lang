#include <stdio.h>
#include <stdlib.h>
#include "user.h"
 
// Возвращение буфера через выходной параметр и размера данных через результат
extern size_t getUsers(struct User**);
 
int main(void)
{
  // определяем указатель на полученный буфер
  struct User* buffer;
  // получаем данные
  size_t count = getUsers(&buffer);
 
  for(int i =0; i < count; i++)
  {
    printf("%s - %u\n", buffer[i].name, buffer[i].age);
  }
    
  free(buffer); // освобождаем память буфера
}