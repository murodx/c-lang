#include <stdio.h>
#include <math.h>

//For a float number there is also the sqrtf() function, and for a long double number, there is the sqrtl() function
int main(void)
{
    double n1 = 224;
    printf("sqrt(%.f) = %.f\n", n1, sqrt(n1));  // sqrt(224) = 15
    double n2 = 36;
    printf("sqrt(%.f) = %.f\n", n2, sqrt(n2));  // sqrt(36) = 6
    return 0;
}
// the function sqrt() return type double
