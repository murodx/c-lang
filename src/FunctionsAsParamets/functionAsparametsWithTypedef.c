#include <stdio.h>

typedef int(binary_op)(int,int);

int sum(int x, int y){ return x + y;}
int subtract(int x, int y){return x - y;}

int operation(binary_op op, int a,int b)
{
    return op(a,b);
}
int main(void){
    printf("result = %d \n", operation(sum,10,5));
    printf("result = %d \n", operation(subtract,10,5));
    return 0;

}