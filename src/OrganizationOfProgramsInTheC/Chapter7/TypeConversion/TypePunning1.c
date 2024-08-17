#include <stdio.h>
#include <stdint.h>
 
// Преобразуем набор байтов в 32-разрядное целое число со знаком
int32_t int32_from_bytes(uint8_t* buffer)
{
  // Преобразуем указатель на байты в указатель на int32 и разыменовываем
  return *((int32_t*) buffer);
}
 
//Преобразуем 32-разрядное целое число со знаком в набора байтов
void int32_to_bytes(int32_t value, uint8_t* buffer)
{
  // первый элемент массива байтов - первый (самый младший) байт числа int32
  buffer[0] = (uint8_t)value;
  buffer[1] = (uint8_t)(value >> 8);  // второй байт числа int32
  buffer[2] = (uint8_t)(value >> 16); // третий байт числа int32
  buffer[3] = (uint8_t)(value >> 24); // четвертый байт числа int32
}
 
int main(void){
 
  uint32_t number = 0x05040302;
  uint8_t bytes[4];
  // преобразование из int32_t в uint8_t
  int32_to_bytes(number, bytes);
  // для проверки выводим на консоль
  for(int i=0; i< 4; i++){
    printf("bytes[%d]: %d\n", i, bytes[i]);
  }
   
   
  // обратное преобразование из uint8_t в int32_t
  uint32_t val = int32_from_bytes(bytes);
  printf("Restored number: %#x\n", val);
 
  return 0;
}