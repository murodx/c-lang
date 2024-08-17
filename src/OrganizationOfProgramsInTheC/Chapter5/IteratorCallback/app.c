#include <stdio.h>
#include "account.h"
 
void printUserName(char* username)
{
    printf("%s\n", username);
}
void printNameT(char* username)
{
    if(username[0]=='T')  // если слово начинается на букву T
        printf("%s\n", username);
}
 
int main(void)
{
    createAccountList();  // создаем данные
     
    iterateUserNames(printUserName);    // выводим все имена пользователей
 
    printf("\n"); // для разделения вывода
 
    iterateUserNames(printNameT);   // выводим только те имена, которые начинаются на Т
 
    deleteAccountList();  // удаляем данные
}