#include <stdio.h>
#include <stdlib.h>
#include "account.h"

//  структура данных
struct ACCOUNT
{
    char *login;
    char *password;
    struct ACCOUNT *next;
};

// Структура итератора
struct  ITERATOR
{
    char *data;
    struct ACCOUNT* element;
};
// Список объектов - указатель на первый элемент
static struct ACCOUNT *accountList;

struct ITERATOR* createIterator(){
    struct ITERATOR* iterator = malloc(sizeof(struct ITERATOR));
    iterator->element = accountList;
    return iterator;
}
void destroyIterator(struct ITERATOR * iterator){
    free(iterator);
}
char *getUserName(struct ITERATOR* iterator){
    if(iterator->element){
        iterator->data = iterator->element->login;
        iterator->element = iterator->element->next;
        return iterator->data;
    }
    return NULL;
}
// создаем список с начальными данными
void createAccountList(){
    struct ACCOUNT *tom = malloc(sizeof(struct ACCOUNT));
    tom->login = "Tomas";
    tom->password = "qwerty";
    accountList = tom;

    struct ACCOUNT* bob = malloc(sizeof(struct ACCOUNT));
    bob->login = "Bob";
    bob->password = "12345";
    tom->next = bob;

    struct ACCOUNT* tim = malloc(sizeof(struct ACCOUNT));
    tim->login ="Tim";
     tim->password = "45678";
     bob->next = tim;
     tim->next = 0;
}
// Удаляем список с начальными данными
void deleteAccountList(){
    while (accountList){
        free(accountList);
        accountList = accountList->next;
    }
}