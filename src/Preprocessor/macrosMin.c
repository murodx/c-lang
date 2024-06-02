#include <stdio.h>
#define min(a,b) (a < b ? a : b)
 
int main(void)
{
    int x = 23;
    int y = 14;
    int z = min(x,y);
    printf("min = %d", z);  // min = 14
    return 0;
}