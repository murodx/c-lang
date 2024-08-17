#include <stdio.h>
#include "account.h"
 
int main(void)
{
    createAccountList();  // создаем данные
    char* username;
    struct ITERATOR* iterator = createIterator(); // создаем итератор
    while((username = getUserName(iterator)))   // проходим итератором по списку учетных записей
    {
        printf("%s\n", username);
    }
    destroyIterator(iterator);  // удаляем итератор
    deleteAccountList();  // удаляем данные
}