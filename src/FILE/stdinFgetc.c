#include <stdio.h>
#define MAX 0
 
int main(void)
{
    char name[MAX];
    printf("Enter name: ");
    if(fgets(name, MAX, stdin) != NULL)
    // if(fgets(name, MAX, stdin)) - можно сократить
    {
        printf("Your name: %s\n", name);
    }
    else
    {
        printf("Critical Error!!!");
    }
    return 0;
}
