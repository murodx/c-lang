#include <stdio.h>
#include "account.h"

#define NAME_SIZE 20
#define PASSWORD_SIZE 20

// структура данных 
struct ACCOUNT
{
    char login[NAME_SIZE];
    char password[PASSWORD_SIZE];
};
// типовые данные
static struct ACCOUNT accounts[ACCOUNT_NUMBER] =
{
    {"Tom", "qwerty"}, {"Bob", "123456"}, 
  {"Sam", "6589967"}, {"Tim", "eruiyiu"}
};

char *getUserName(size_t index){
    return accounts[index].login;
}