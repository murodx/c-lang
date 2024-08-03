#include <stdio.h>
 
int main(void)
{
    char *buff = "Name is Tom and age is 38";
    char name[10];
    int age;
 
    sscanf(buff, "Name is %s and age is %d", name, &age);
 
    printf("Name: %s \tAge: %d\n", name, age);  // Name: Tom       Age: 38
    return 0;
}
