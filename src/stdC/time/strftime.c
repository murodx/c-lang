#include <stdio.h>
#include <time.h>
 
int main(void)
{
    time_t mytime = time(NULL);
    struct tm *now = localtime(&mytime);
    char str[20];
    strftime(str, sizeof(str), "%D", now);
    printf("Date: %s\n", str);
    return 0;
}
