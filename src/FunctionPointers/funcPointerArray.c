#include <stdio.h>

// Массивы указателей на функции
void sum(int x, int y)
{
    printf("x + y = %d \n", x + y);
}
void subtract(int x, int y)
{
    printf("x - y = %d \n", x - y);
}
void multiply(int x, int y)
{
    printf("x * y = %d \n", x * y);
}
int main(void)
{
    int a = 10;
    int b = 5;
    void (*operations[3])(int, int) = {sum, subtract, multiply};
     
    // получаем длину массива
    int length = sizeof(operations)/sizeof(operations[0]);
     
    for(int i=0; i < length; i++)
    {
        operations[i](a, b);    // вызов функции по указателю
    }
     
    return 0;
}