#include <stdio.h>
#include "database.h"
 
int main(void)
{
    // условный 1-й клиент создает базу данных с id 2
    struct Database* db1 = openDatabase(2); // 1-й клиент открывает базу данных
    // устанавливаем данные
    setUser(db1, 0, "Tom"); 
    setUser(db1, 1, "Bob");
    setUser(db1, 2, "Sam");
    printf("Users List for 1 client\n");
    printUsers(db1);
 
    // условный 2-й клиент создает базу данных с id 2
    struct Database* db2 = openDatabase(2);// 2-й клиент открывает базу данных
    setUser(db2, 3, "Alice");
    printf("\nUsers List for 2 client\n");
    printUsers(db2);
     
    closeDatabase(db1); // 1-й клиент закрывает базу данных
    closeDatabase(db2); // 2-й клиент закрывает базу данных
}