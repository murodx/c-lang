#include <stdio.h>
 
#define t int
#define swap(t, x, y) { t temp = x; x = y; y=temp;}
 
int main(void)
{
    t x = 4;
    t y = 10;
    swap(t, x, y)
    printf("x=%d \t y=%d", x, y);
    return 0;
}