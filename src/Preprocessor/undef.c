#include <stdio.h>
 
#define STRING "Good morning \n"
 
int main(void)
{
    printf(STRING);
    #undef STRING
    #define STRING "Good afternoon \n"
    printf(STRING);
    #undef STRING
    #define STRING "Good evening \n"
    printf(STRING);
    return 0;
}