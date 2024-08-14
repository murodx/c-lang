#include <stdio.h>

 // Строки, которыми инициализируются массивы, как в данном случае, не сохраняются в статической, 
 // вместо этого, как и другие автоматические переменные, они сохраняются в стеке.  
char* getUser()
{
  char name[] = "Tom";
  return name;
}
 
int main(void)
{
  char* user = getUser();
  printf("%s\n", user);
}