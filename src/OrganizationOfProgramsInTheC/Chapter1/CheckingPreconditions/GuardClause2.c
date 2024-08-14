#include <stdio.h>
 
void writeTextToFile(char*, char*);
 
int main(void){
    char* filename ="test.txt";
    char* text = "hello 2";
    writeTextToFile(filename, text);
}
 
void writeTextToFile(char* file_name, char* text)
{
    // проверка предусловий 
    if(file_name==NULL) // если имя файла не указано, выход из функции
    {
        printf("Error! File name is incorrect!\n");
        return;
    }
    if(text == NULL)    // если текст не указан
    {
        printf("Error! Text is incorrect!\n");
        return;
    }    
    // открываем файл
    FILE* file_pointer=fopen(file_name, "w");
    if(file_pointer == NULL)    // если открытие файла прошло неудачно, выход из функции открыт
    { 
        printf("Error! Unable to open file!\n");
        return;
    }
    // запись в файл
    if(fputs(text, file_pointer)!=EOF)
    {
        printf("Success! Text has been written to the file!\n");
    }   
    // закрываем файл
    fclose(file_pointer);
}