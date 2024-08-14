#ifndef user_h
#define user_h
// структура представляет данные
struct User{
  char* name;
  unsigned age;
};
// структура представляет возвращаемый результат
struct UsersList
{
  struct User* buffer;
  size_t count;
};

#endif