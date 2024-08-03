#include <stdio.h>
#include <string.h>
 
struct person
{
    char name[20];
    int age;
};
 
int main(void)
{
    struct person tom = {"Tom", 38};
    struct person tomas = {"Tom", 38};
 
    int result = memcmp(&tom, &tomas, sizeof(struct person));
    if(result == 0)
    {
        printf("tom and tomas are equal \n");
    }
    else   
    {
        printf("tom and tomas are not equal \n");
    }
    return 0;
}
