#include <stdio.h>
#include <string.h>
 
int main(void)
{
    char source[] = "Hello World";
    // копируем 5 байт
    char destination[5];
    memcpy(destination, source, sizeof destination);
 
    // выводим скопированные байты
    for (int i = 0; i < sizeof destination; i++)
    {
        printf("%c", destination[i]);
    }
    return 0;
}
