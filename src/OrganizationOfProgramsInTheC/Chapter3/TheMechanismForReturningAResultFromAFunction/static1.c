#include <stdio.h>
 
int* getNumber()
{
  static int result = 125;
  return &result;  // возвращаем результат - адрес переменной result
}
int main(void)
{
  int* n = getNumber();  // получаем результат в переменную n
  printf("*n =%d\n", *n); // разыменовываем указатель
}