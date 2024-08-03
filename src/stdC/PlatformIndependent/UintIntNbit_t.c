#include <stdio.h>
#include <stdint.h>
#include <inttypes.h> // Для форматных спецификаторов

int main(void)
{
    int8_t i8 = -8;
    uint8_t u8 = 8;
 
    int16_t i16 = -16;
    uint16_t u16 = 16;
 
    int32_t i32 = -32;
    uint32_t u32 = 32;
 
    int64_t i64 = -64;
    uint64_t u64 = 64;
 
    // Используем форматные спецификаторы из <inttypes.h>
    printf("i8 = %" PRId8 " \n", i8);
    printf("u8 = %" PRIu8 " \n", u8);
 
    printf("i16 = %" PRId16 " \n", i16);
    printf("u16 = %" PRIu16 " \n", u16);
 
    printf("i32 = %" PRId32 " \n", i32);
    printf("u32 = %" PRIu32 " \n", u32);
 
    printf("i64 = %" PRId64 " \n", i64);
    printf("u64 = %" PRIu64 " \n", u64);
      
    return 0;
}
