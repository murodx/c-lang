#include <stdio.h>
 
extern char message[];      // переменная message из файла main.c
void print(void);           // функция print из main.c
int sum(int, int);          // функция sum из main.c
 
int main(void)
{
    // выводим на консоль внешнюю переменную message
    printf("%s \n", message);
    // вызываем внешнюю функцию print
    print();
    // вызываем другую внешнюю функцию - sum
    printf("4 + 5 = %d \n", sum(5, 4));
    return 0;
}