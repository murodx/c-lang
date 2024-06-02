#include <stdio.h>
 
int main(void)
{
    int x = NUMBER;
 
    printf("x = %d\n", x);
    return 0;
}
//  gcc -D NUMBER=25 TerminalConstDefine.c 