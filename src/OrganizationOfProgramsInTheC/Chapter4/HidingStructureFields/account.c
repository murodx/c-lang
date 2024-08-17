#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "account.h"
 
#define STR_SIZE 16
struct Account
{
    char username[STR_SIZE];
    char password[STR_SIZE];
};
 
struct Account* createAccount(char* username, char* pass)
{
  struct Account* acc = malloc(sizeof(struct Account));
  memcpy(acc->username, username, STR_SIZE);
  memcpy(acc->password, pass, STR_SIZE);
  return acc;
}
 
void printName(struct Account* acc)
{
  if(acc) printf("User Name: %s\n", acc->username);
}
 
void deleteAccount(struct Account* acc)
{
  if(acc) free(acc);
  acc = 0;
}