#include "user.h"
 
static struct User data = {"Tom", 39, "tom@smail.ru"};
const struct User* getUser(void)
{
    return &data;
}