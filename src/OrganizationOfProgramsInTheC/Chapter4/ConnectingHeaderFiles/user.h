#pragma once    // однократное подключение файла
struct User
{
  char* name;
  unsigned age;
};
 
void printUser(struct User);