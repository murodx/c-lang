#include <stdio.h>
#include "sort.h"
 
// реализация функции сортировки
void sort(comparator compare, int* array, size_t length)
{
  for(size_t i=0; i<length-1; i++)
  {
    for(size_t j=i+1; j<length; j++)
    {
      // выполняем переданную функцию compare
      if(compare(array[i], array[j]))
      {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
}