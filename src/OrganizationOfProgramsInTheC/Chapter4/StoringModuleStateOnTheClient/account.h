#define STR_SIZE 16
struct Account
{
    char username[STR_SIZE];
    char password[STR_SIZE];
};
 
struct Account* createAccount(char* username, char* pass);
void printName(struct Account* acc);
void deleteAccount(struct Account* acc);