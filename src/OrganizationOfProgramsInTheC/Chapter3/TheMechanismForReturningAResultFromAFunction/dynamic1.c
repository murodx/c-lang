#include <stdio.h>
#include <stdlib.h>
// В данном случае опять же происходит копирование значения из переменной result в регистр RAX
 
int* getNumber()
{
  int* result = malloc(sizeof(int));
  *result = 134;  // помещаем значение в динамическую память
  return result;  // возвращаем адрес в динамической памяти
}
int main(void)
{
  int* pointer = getNumber();  // получаем результат в переменную n
  printf("*pointer = %d\n", *pointer); // *pointer = 134
  free(pointer);    // освобождаем данные
}