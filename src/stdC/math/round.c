#include <stdio.h>
#include <math.h>
 
int main(void)
{
     double n1 = 3.14;
    printf("round(%.2f) = %.2f\n", n1, round(n1));  // round(3.14) = 3.00
     double n2 = 3.49;
    printf("round(%.2f) = %.2f\n", n2, round(n2));  // round(3.49) = 3.00
     double n3 = 3.5;
    printf("round(%.2f) = %.2f\n", n3, round(n3));  // round(3.50) = 4.00
    return 0;
}
