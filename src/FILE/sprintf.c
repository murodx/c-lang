#include <stdio.h>
 
void main (void)
{
    int age = 38;
    char* name = "Tom";
    char text[50];  
    int charNumber = sprintf (text, "Name: %s  Age: %d\n", name, age);  
    printf ("%s",text);  // Name: Tom  Age: 38
    printf("text length: %d", charNumber);  // text length: 19
}
