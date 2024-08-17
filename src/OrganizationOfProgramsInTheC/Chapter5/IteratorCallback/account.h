// указатель на функцию, которая получает перебираемый элемент
typedef void (*CALLBACK)(char* username);
 
// Функция перебора объектов, которая вызывает коллбек-callback
void iterateUserNames(CALLBACK callback);
 
// создание списка
void createAccountList(void);
// удаление списка
void deleteAccountList(void);