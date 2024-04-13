#include <stdio.h>
 
// функция принимает массив символов
void print_message(char message[])
{
    printf("%s\n", message);
}
 
int main(void)
{
    print_message("Hello METANIT.COM!");
    print_message("Hello World!");
    print_message("Hello work...");
}