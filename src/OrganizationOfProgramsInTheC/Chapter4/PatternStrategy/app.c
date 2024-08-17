#include <stdio.h>
#include "sort.h"
 
#define ARRAY_SIZE 4
 
// сортировка по возрастанию
int compareAsc(int x, int y)
{
  return x>y;
}
// сортировка по убыванию 
int compareDesc(int x, int y)
{
  return x<y;
}
int main(void)
{
    // массив для сортировки
    int array[ARRAY_SIZE] = {3, 5, 6, 1};
    // сортируем массив по возрастанию
    sort(compareAsc, array, ARRAY_SIZE);
 
    printf("Ascending: ");
     
    for(size_t i=0; i<ARRAY_SIZE; i++)
    {
        printf("%d ", array[i]);
    }
 
    // сортируем массив по убыванию
    sort(compareDesc, array, ARRAY_SIZE);
 
    printf("\n\nDescending: ");
     
    for(size_t i=0; i<ARRAY_SIZE; i++)
    {
        printf("%d ", array[i]);
    }
}