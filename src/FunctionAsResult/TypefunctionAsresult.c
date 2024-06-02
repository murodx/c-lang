#include <stdio.h>
  
typedef int (binary_op)(int, int);
 
int sum(int x, int y) { return x + y;}
int subtract(int x, int y) { return x - y;}
int multiply(int x, int y) { return x * y;}
 
int operation(binary_op op, int a, int b){ return op(a, b);}
 
//  int choice - выбранный пункт
binary_op* select(int choice)
{
    // возвращаем нужную функцию
    switch (choice)
    {
        case 2:
            return &subtract;
        case 3:
            return &multiply;
        default:
            return &sum;
    }
}
int main(void)
{
    binary_op* operation = select(1);  // получаем указатель на функцию sum - сложение
    int result = operation(6, 4); // выполняем функцию
    printf("result: %d \n", result); // result: 10
 
    return 0;
}