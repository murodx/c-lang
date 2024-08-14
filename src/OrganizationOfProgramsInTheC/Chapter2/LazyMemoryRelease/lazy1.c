#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
 
// получаем длину файла
int getFileLength(FILE* fp)
{
    fseek(fp, 0, SEEK_END);
    int file_length = ftell(fp);
    return file_length;
}
// считываем файл в buffer
void readFile(FILE* fp, char* buffer, int file_length)
{
    fseek(fp, 0, SEEK_SET);
    int read_elements = fread(buffer, 1, file_length, fp);
    buffer[read_elements] = '\0';   // устанавливаем концевой нулевой байт для строки
}
 
int main(void)
{
    char* filename = "test.txt"; 
    FILE* fp = fopen(filename, "r");
    // если не удалось открыть файл, останавливаем программу
    assert(fp && "Unable to open file!\n");
     
    int file_length = getFileLength(fp);  // получаем длину файла
    char* text = malloc(file_length + 1);
    if(text)    // если удалось выделять память
    {
        readFile(fp, text, file_length);  // считываем файл
        printf("%s",text);
    }
    fclose(fp);
}