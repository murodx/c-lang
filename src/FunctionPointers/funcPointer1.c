#include <stdio.h>
 
void hello()
{
    printf("Hello, World \n");
}
void goodbye()
{
    printf("Good Bye, World \n");
}
int main(void)
{
    // определяем указатель на функцию
    void (*message) (void);
      
    message=hello;  // указатель указывает на функцию hello
    message();      // вызываем функцию, на которую указыывет указатель
    message = goodbye;  // указатель указывает на функцию goodbye
    message();      // вызываем функцию, на которую указыывет указатель
    return 0;
}