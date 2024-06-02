#include <stdio.h>
 
#define ADD(a,b) (a+b)
 
int main(void)
{
    int n1 = 10;
    int n2 = 5;
    printf("%d + %d = %d", n1, n2, ADD(n1, n2));  // 10 + 5 = 15
}