#include <stdio.h>
#include <uchar.h>
 
int main(void)
{
    char16_t utf16_str[] = u"UTF-16 string";
     
    printf("%ls \n", utf16_str);
 
    char32_t utf32_str[] = U"UTF-32 string";
    // определяем размер строки utf-32
    int n = sizeof(utf32_str)/4;
    for(int i=0; i < n; i++)
    {
        printf("%lc", utf32_str[i]);
    }
 
    return 0;
}