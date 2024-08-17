#include <stdio.h>
#include "database.h" 
  
#define DATA_MAX_SIZE 5
// условные данные
static char* data[DATA_MAX_SIZE] = {"Tom", "Bob", "Sam", "Alice", "Kate"};
  
void printUser(int index)
{
    if(index > -1 && index < DATA_MAX_SIZE)
        printf("%s\n",data[index]);
    else
        printf("User not found\n");
}
 
void printUsers()
{
    printf("Users List\n");
    for(size_t i =0; i < DATA_MAX_SIZE; i++)
    {   
        printf("%s\n",data[i]);
    }
}