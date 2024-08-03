#include <stdio.h>
#include <string.h>
 
struct person
{
    char name[20];
    int age;
};
 
int main(void)
{
    struct person tom = {"Tom", 38};    // структура, которую копируем
    struct person someperson;   // структура, в которую копируем
 
    memcpy(&someperson, &tom, sizeof(struct person));
 
    printf("Name: %s\n", someperson.name);
    printf("Age: %d\n", someperson.age);
    return 0;
}
