#include <stdio.h>
  
#define MAX_ELEMENTS 20    // максимальное количество элементов
#define ELEMENT_SIZE 255   // размер одного элемента
 
// структура, которая представляет один блок в пуле памяти
typedef struct
{
  int occupied;
  char memory[ELEMENT_SIZE];
} PoolBlock;
 
static PoolBlock memory_pool[MAX_ELEMENTS]; // сам пул памяти
 
// если переданный размер не превышает максимальный, то возвращает указатель на свободный блок памяти 
// если свободных блоков нет или размер больше максимального, то возврашает NULL
void* take(size_t size)
{
  if(size <= ELEMENT_SIZE)   // если не больше размера одного блока
  {
    for(size_t i=0; i<MAX_ELEMENTS; i++)   // проходим по всем блокам
    {
      if(memory_pool[i].occupied == 0)    // если блок не занят
      {
        memory_pool[i].occupied = 1;      // указываем, что он занят
        return &(memory_pool[i].memory);    // возвращаем адрес на память этого блока
      }
    }
  }
  return NULL;
}
 
// освобождает указатель на блок памяти
void release(void* pointer)
{
  for(int i=0; i<MAX_ELEMENTS; i++)  // проходим по всем блокам
  {
    if(&(memory_pool[i].memory) == pointer) // если указатель указывает на память определенного блока
    {
      memory_pool[i].occupied = 0;    // указываем, что блок теперь свободен
      return;
    }
  }
}
 
int main(void)
{
    unsigned* age = take(sizeof(unsigned));
    if(age)
    {
        printf("Enter age: ");
        scanf("%u", age);  // вводим в age число unsigned
         
        printf("Your age: %u\n", *age);
        release(age);    // освобождаем память
    }
    else
    {
        printf("Unable to allocate memory\n");
    }
}