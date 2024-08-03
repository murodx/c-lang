#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    int m = -15;
    int n = 24;
 
    printf("abs(m) = %d \n", abs(m));   // abs(m) = 15
    printf("abs(n) = %d \n", abs(n));   // abs(n) = 24
    return 0;
}
// for long there is labs() and also for a long long llabs() and for float in math.h there is fasbs
