#include <stdio.h>
#include <assert.h>
 
void getMinMax(int* array, size_t length, int* min, int* max)
{
  assert(length >1 && "Array length is invalid");
  *min = array[0];
  *max = array[0];
  for(size_t i = 0; i < length; i++)
  {
    if(array[i] < *min) *min = array[i];
    if(array[i] > *max) *max = array[i];
  }
}
int main(void)
{
  int array[] = {7, 3, 4, 5, 6, 8};
  size_t length = sizeof(array) / sizeof(int);
 
  int minVal = 0;
  int maxVal = 0;
  getMinMax(array, length, &minVal, &maxVal);
  printf("min=%d\n", minVal);
  printf("max=%d\n", maxVal);
}