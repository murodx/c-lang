struct Database;        // условная база данных
struct Database* openDatabase(size_t id);   // открытие базы данных
void closeDatabase(struct Database* db);    // закрытие базы данных
 
void setUser(struct Database* db, size_t index, char* name);    // изменение данных
void printUsers(struct Database* db);   // получение данных