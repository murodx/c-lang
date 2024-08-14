#include <stdio.h>
#include "user.h"
 
extern void getUsers(struct User*);
 
int main(void)
{
  // определяем буфер для данных
  struct User buffer[DATA_COUNT];
 
  // получаем данные
  getUsers(buffer);
 
  for(int i =0; i < DATA_COUNT; i++)
  {
    printf("%s - %u\n", buffer[i].name, buffer[i].age);
  }
}