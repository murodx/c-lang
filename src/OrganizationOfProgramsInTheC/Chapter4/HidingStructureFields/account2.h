// Объявление указателя на структуру
typedef struct Account* UserAccount;    // указатель на структуру
struct Account* createAccount(char* username, char* pass);
void printName(struct Account* acc);
void deleteAccount(struct Account* acc);