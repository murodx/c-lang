#include <stdio.h>
 
// константный параметр
int twice(const int *x)
{
    //*x = *x * *x;     // так нельзя, так как x - константный параметр
    int y = *x + *x;
    return y;
}
 
int main(void)
{
    int n = 10;
    int m = twice(&n);
    printf("n = %d \n", n);     // n = 10
    printf("m = %d \n", m);     // m = 20
    return 0;
}