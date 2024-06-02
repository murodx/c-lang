#include <stdio.h>

// В языке Си одна функция может возвращать указатель на другую функцию
int sum(int x, int y)
{
    return x + y;
}
int subtract(int x, int y)
{
    return x - y;
}
int multiply(int x, int y)
{
    return x * y;
}
// int choice - выбранный пункт
int (*select(int choice))(int, int)
{
    switch (choice)
    {
    case 2:
        return subtract;
    case 3:
        return multiply;
    default:
        return sum;
    }
}
int main(void)
{
    int (*operation)(int,int);
    // возвращает указатель на функцию - по сути выбранную функцию.
    operation = select(1);
    int result = operation(6,4);    
    printf("result = %d \n", result);
    return 0;
}