#include <stdio.h>
#define print_int(n) printf(#n"=%d \n",n);
 // Операция # позволяет заключать текст параметра, который следует после операции, в кавычки
int main(void)
{
    int x = 23;
    print_int(x);       // x=23
    int y = 14;
    print_int(y);       // y=14
    int number = 203;
    print_int(number);  // number=203
    return 0;
}