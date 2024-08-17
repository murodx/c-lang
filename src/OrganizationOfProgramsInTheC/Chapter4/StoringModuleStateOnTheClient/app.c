#include "account.h"
 
int main(void)
{
    struct Account* acc = createAccount("tom smith", "qwerty"); // создаем состояние
    printName(acc);     // операции с состоянием
    deleteAccount(acc); // удаляем состояние
}