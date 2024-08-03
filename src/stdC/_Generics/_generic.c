#include <stdio.h>
 
// определение обобщенной функции sum
#define sum(a, b) _Generic((a), \
    int : sum_int, \
    float : sum_float, \
    default : sum_double \
)(a, b)
 
// отдельные реализации функции
void sum_int(int a, int b)
{
    printf("Sum of ints: %d\n", a + b);
}
void sum_float(float a, float b)
{
    printf("Sum of floats: %f\n", a + b);
}
void sum_double(double a, double b)
{
    printf("Sum of numbers: %lf\n", a + b);
}
int main(void)
{
    int int_num1 = 4;
    int int_num2 = 5;
 
    float float_num1 = 5.6f;
    float float_num2 = 6.5f;
 
    double double_num1 = 2.3l;
    double double_num2 = 3.7l;
 
    sum(int_num1, int_num2);
    sum(float_num1, float_num2);
    sum(double_num1, double_num2);
     
    return 0;
}