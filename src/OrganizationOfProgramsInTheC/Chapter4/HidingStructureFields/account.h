// Объявление структуры без определения 
struct Account; // только объявление структуры
struct Account* createAccount(char* username, char* pass);
void printName(struct Account* acc);
void deleteAccount(struct Account* acc);