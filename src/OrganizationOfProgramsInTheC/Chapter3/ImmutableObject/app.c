#include <stdio.h>
#include "user.h"
 
extern const struct User* getUser(void);
 
int main(void)
{
  const struct User* user;  // получаемый объект представляет указатель на константу
  user = getUser(); // получаем объект в константу
 
  printf("name=%s\n", user->name);
  printf("email=%s\n", user->email);
  printf("age=%d\n", user->age);
}