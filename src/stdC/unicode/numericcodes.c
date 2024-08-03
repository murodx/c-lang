#include <stdio.h>
#include <uchar.h>
#include <locale.h>
#include <stdlib.h>

int main(void)
{
    // Устанавливаем локаль для поддержки широких символов
    setlocale(LC_CTYPE, "");

    // UTF-16 строка
    char16_t utf16_str[] = u"\u043F\u0440\u0438\u0432\u0435\u0442";  // "привет"

    // Преобразуем UTF-16 строку в UTF-8
    char utf8_str[256];
    char *utf8_ptr = utf8_str;
    for (size_t i = 0; utf16_str[i] != '\0'; ++i) {
        char16_t c = utf16_str[i];
        if (c < 0x80) {
            *utf8_ptr++ = (char)c;
        } else if (c < 0x800) {
            *utf8_ptr++ = (char)(0xC0 | (c >> 6));
            *utf8_ptr++ = (char)(0x80 | (c & 0x3F));
        } else {
            *utf8_ptr++ = (char)(0xE0 | (c >> 12));
            *utf8_ptr++ = (char)(0x80 | ((c >> 6) & 0x3F));
            *utf8_ptr++ = (char)(0x80 | (c & 0x3F));
        }
    }
    *utf8_ptr = '\0';  // Завершаем строку

    // Выводим UTF-8 строку
    printf("%s\n", utf8_str);

    // UTF-16 символ
    char16_t s = u'\u044F';  // "я"
    printf("%lc\n", (wchar_t)s);  // Используем wchar_t для корректного вывода

    return 0;
}
