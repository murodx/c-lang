#include <stdio.h>
#include "userlist.h"
 
void printUserList(struct User* users, size_t count)
{
    for(size_t i=0; i < count; i++)
    {
        printUser(users[i]);
    }
}