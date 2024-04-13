#include <stdio.h>
 
//extern char message[];    -  переменная message из файла main.c недоступна
// void print(void);        - функция print из main.c недоступна
void hello(void);           // функция hello из main.c доступна
 
int main(void)
{
    // вызываем другую внешнюю функцию - hello
    hello();
    return 0;
}