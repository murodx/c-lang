// создание итератора
struct ITERATOR* createIterator(void);
 
// Получаем данные
char* getUserName(struct ITERATOR*);
 
// Удаляем итератор
void destroyIterator(struct ITERATOR*);
 
// создание списка
void createAccountList(void);
// удаление списка
void deleteAccountList(void);