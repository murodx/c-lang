#include <stdio.h>
 
#define SQUARE(n) (n)*(n)
 
int main(void)
{
    int x = SQUARE(4+2);
 
    printf("x = %d\n", x);      // x = 14
    return 0;
}