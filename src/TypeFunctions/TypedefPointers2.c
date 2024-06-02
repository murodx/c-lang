#include <stdio.h>
// Типы функции 2
typedef int (binary_op)(int,int);

int sum(int x, int y){ return x + y;}
int subtract(int x, int y){return x + y;}

int main(void){
    int a = 10;
    int b = 5;
    int result;
    binary_op *op1 = &sum;
    binary_op *op2 = &subtract;
    result = op1(a,b);
    printf("result = %\n",result);

    result = op2(a,b);
    printf("result + %\n", result);

    return 0;
}