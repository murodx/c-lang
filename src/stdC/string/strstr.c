#include <stdio.h>
#include <string.h>
 
int main(void)
{
    char text[20] = "Hello METANIT.COM!";
    char substring[14] = "METANIT.COM";
    char *substring_ptr = strstr(text, substring);
    // если подстрока найдена
    if(substring_ptr)
    {
        // вычисляем позицию подстроки в строке
        long position = substring_ptr - text;
        printf("Substring index: %ld\n", position);     // Substring index: 6
    }
    else    // если подстрока не найдена
    {
        printf("Substring not found\n");
    }
    return 0;
}
