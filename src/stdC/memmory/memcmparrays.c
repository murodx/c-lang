#include <stdio.h>
#include <string.h>
 
int main(void)
{
    int numbers1[] = {1, 2, 3, 4, 5};
    int numbers2[] = {2, 1, 3, 4, 5}; 
 
    int result = memcmp(numbers1, numbers2, sizeof(numbers1));
    if(!result)
    {
        printf("arrays are equal \n");
    }
    else   
    {
        printf("arrays are not equal \n");
    }
    return 0;
}
