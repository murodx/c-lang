#include <stdio.h>
 
#define HELLO printf("Hello World! \n")
#define FOR for(int i=0; i<4; i++)
 
int main(void)
{
    FOR HELLO;
    return 0;
}