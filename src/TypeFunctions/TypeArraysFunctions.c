#include <stdio.h>
// массив указателей на функции
typedef int(binary_op)(int,int);

int sum(int x, int y){return x + y;}
int subtract(int x, int y){return x - y;}
int multiply(int x, int y){return x * y;}

int main(void){
    binary_op *operations[] = {&sum,&subtract,&multiply};;
    printf("result = %d \n", operations[0](10,5));
    printf("result = %d \n", operations[1](10,5));
    printf("result = %d \n", operations[2](10,5));
}

