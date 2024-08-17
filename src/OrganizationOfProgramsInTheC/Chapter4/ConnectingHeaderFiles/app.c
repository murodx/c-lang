#include "userlist.h"   // подключаем API модуля userlist

#define USERS_COUNT 4
 
int main(void)
{
    struct User users[USERS_COUNT] = 
    {
        {"Tom", 39}, {"Bob", 42},
        {"Sam", 29}, {"Alice", 34}
    };
    printUserList(users, USERS_COUNT);
}