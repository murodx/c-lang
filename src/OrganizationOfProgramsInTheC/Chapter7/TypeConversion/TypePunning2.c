#include <stdio.h>
#include <stdint.h>
#include <string.h>
 
// Считываем 32-разрядное целое число со знаком из набора байтов
void float_to_bytes(float value, uint8_t* buffer)
{
  // применяем библиотечную функцию memcpy
   memcpy(buffer, &value, sizeof(float));
}
 
// получаем значение float из массива байт
float float_from_bytes(uint8_t * buffer)
{
  union
  {
    uint8_t bytes[4];
    float number;
  } type_swap;
 
  type_swap.bytes[0] = buffer[0];
  type_swap.bytes[1] = buffer[1];
  type_swap.bytes[2] = buffer[2];
  type_swap.bytes[3] = buffer[3];
  return type_swap.number;
}
 
 
int main(void){
 
  float num = 3.1415;
  uint8_t bytes[sizeof(float)];
  // преобразование из float в uint8_t
  float_to_bytes(num, bytes); 
   
  // обратное преобразование из uint8_t во float
  float val = float_from_bytes(bytes);
  printf("Restored number: %f\n", val);
 
  return 0;
}