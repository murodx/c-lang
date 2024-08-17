#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "file_printer.h"
 
// получаем длину файла
// функция не входит в API, поэтому определена со словом static
static int getFileLength(FILE* fp)
{
    fseek(fp, 0, SEEK_END);
    int file_length = ftell(fp);
    return file_length;
}
// считываем файл в buffer
// функция не входит в API, поэтому определена со словом static
static void readFile(FILE* fp, char* buffer, int file_length)
{
    fseek(fp, 0, SEEK_SET);
    int read_elements = fread(buffer, 1, file_length, fp);
    buffer[read_elements] = '\0';   // устанавливем концевой нулевой байт для строки
}
// вывод файла на консоль
// Функция printFile входит в API, поэтому определена без слова static
void printFile(char* filename)
{
    FILE* fp = 0; // инициализируем нулем
    char* text = 0;         // инициализируем нулем 
  
    assert(filename && "Invalid file name"); // если некорректное имя файла, прерываем программу
  
    fp = fopen(filename, "r");  // открываем файл
    assert(fp && "Unable to open file!\n"); // если не удалось открыть файл, прерываем программу
  
    int file_length = getFileLength(fp);  // получаем длину файла
    if(file_length > 0)
    {
        text = malloc(file_length + 1);
        if(text)    // если удалось выделять память
        {
            readFile(fp, text, file_length);  // считываем файл
            printf("%s\n",text);
  
            free(text); // освобождаем память
            text = 0;   // сбрасываем значение указателя в ноль
        }
    }
    fclose(fp);     // закрываем файл
    fp = 0;         // сбрасываем значение указателя в ноль
}