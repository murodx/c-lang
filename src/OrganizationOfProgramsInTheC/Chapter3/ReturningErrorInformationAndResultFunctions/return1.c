#include <stdio.h>
#include <string.h>
#include <assert.h>

#define USERS_NUMBER 5

typedef struct{
    char *users[USERS_NUMBER];
}database;

int find(database *db, char *);

int main() {
    database db = {.users = {"Tom", "Sam", "Bob", "Alice", "Kate"}};

    char *user = "Alice";
    int index = find(&db,user);
    if(index > -1){
        printf("User index: %d\n", index);
    }
    else {
        printf("User not found\n");
    }
}

int find(database *db, char *user){

    assert(db!=NULL && "Database is invalid");
    assert(user!=NULL && "User is undefined");

    for (size_t i = 0; i < USERS_NUMBER; i++){
        if (strcmp(db->users[i],user)==0){
            return i;
        }
    }
    return -1;
    
}