#include <stdio.h>
#include <stdlib.h>
#include "account.h"
 
// структура данных
struct ACCOUNT
{
  char* username;
  char* password;
  struct ACCOUNT* next;
};
// список объектов - указатель на первый элемент
static struct ACCOUNT* accountList;
 
// перебираем элементы списка
void iterateUserNames(CALLBACK callback)
{
    struct ACCOUNT* current = accountList;  // текущий перебираемый элемент списка
    while(current)  // пока элемент не будет равен NULL
    {
      callback(current->username);  // вызываем коллбек
      current = current->next;  // получаем следующий элемент списка
    }
}
 
// создаем список с начальными данными
void createAccountList()
{
  struct ACCOUNT* tom = malloc(sizeof(struct ACCOUNT));
  tom->username ="Tomas";
  tom->password = "qwerty";
  accountList = tom;
 
  struct ACCOUNT* bob = malloc(sizeof(struct ACCOUNT));
  bob->username ="Bob";
  bob->password = "12345";
  tom->next = bob;
 
  struct ACCOUNT* tim = malloc(sizeof(struct ACCOUNT));
  tim->username ="Tim";
  tim->password = "45678";
  bob->next = tim;
  tim->next = 0;
}
 
// создаем список с начальными данными
void deleteAccountList()
{
  while(accountList)
  {
    free(accountList);
    accountList = accountList->next;
  }
}