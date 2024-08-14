#include <stdio.h>

// Строки в Си располагаются в статической памяти, и фактически здесь getUser возвратит адрес этой строки.
char* getUser()
{
  char* name = "Tom";
  return name;
}
 
int main(void)
{
  char* user = getUser();
  printf("%s\n", user);
}