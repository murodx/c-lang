#include <stdio.h>

// Тип функции можно определить как указатель
typedef int(*binary_op)(int, int);

int sum(int x, int y){return x + y;}
int main(void){
    // Но стоит понимать, что в этом случае binary_op уже будет представлять указатель:
    binary_op op1 = &sum;
    printf("result = %d \n", op1(10,5));

    return 0;
}