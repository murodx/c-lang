#include <stdio.h>
 
#define N 4
 
int main(void)
{
    int numbers[N] = {1, 2, 3, 4};
    for(int i=0; i<N; i++)
    {
        printf("%d ", numbers[i]);
    }
    return 0;
}