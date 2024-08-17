#include <stdio.h>
#include "user.h"
 
void printUser(struct User user)
{
    printf("Name: %s  Age: %d\n", user.name, user.age);
}