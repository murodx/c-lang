#include <stdio.h>
 
void increase(int x)
{
    x = 2 * x;
    printf("Increase func: x = %d \n", x);
}
 
int main(void)
{
    int a = 25;
    increase(a);
    printf("Main func: a = %d \n", a);
}