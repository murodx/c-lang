// #include <stdio.h>
 
// void increment(int *x)
// {
//     *x = *x + 1;
//     printf("increment function: %d \n", *x);
// }
 
// int main(void)
// {
//     int n = 10;
//     increment(&n);
//     printf("main function: %d \n", n);
//     return 0;
// }

#include <stdio.h>
 
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b=temp;
}
int main(void)
{
    int x = 100;
    int y = 200;
    swap(&x, &y);
    printf("x=%d \t y=%d \n", x, y);
    return 0;
}   