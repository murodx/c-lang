#include <stdio.h>

// Типы функции 1
// определяется тип message
typedef void(message)(void);

void hello() {printf("Hello, World \n");}
void goodbye() {printf("Good Bye, World \n");}

int main(){
    message *mes1 =  &hello; // указатель указывает на функцию hello
    message *mes2 = &goodbye; // указатель указывает на функцию goodbye

    mes1();
    mes2();

    return 0;
}