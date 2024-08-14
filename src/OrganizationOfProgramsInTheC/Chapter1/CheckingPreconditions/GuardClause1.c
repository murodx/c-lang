#include <stdio.h>
 
void writeTextToFile(char*, char*);
 
int main(void){
    char* filename ="test.txt";
    char* text = "hello";
    writeTextToFile(filename, text);
}
 
void writeTextToFile(char* file_name, char* text)
{
    FILE* file_pointer = 0;
     
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
    if((file_pointer=fopen(file_name, "w")))    // если файл открыт
    { 
        // запись в файл
        if(fputs(text, file_pointer)!=EOF)
        {
            printf("Success! Text has been written to the file!\n");
        }   
        // закрываем файл
        fclose(file_pointer);
    }
    else
    {
        printf("Error! Unable to open file!\n");
    }
}