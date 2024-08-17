#include <stdio.h>
#include "account.h"
#include "account2.h"
 
int main(void)
{
    struct Account* acc = createAccount("tom smith", "qwerty");
    // з кода клиента мы не сможем напрямую обращаться к полям структуры:
   // printf("%s\n", acc->password); // ! Ошибка

    UserAccount acc = createAccount("Tom Smith", "qwerty");
     // при попытке обратиться к отдельным полям структуры мы опять же столкнемся ошибкой
    // printf("%s\n", acc->password); // ! Ошибка
 
    deleteAccount(acc);
}