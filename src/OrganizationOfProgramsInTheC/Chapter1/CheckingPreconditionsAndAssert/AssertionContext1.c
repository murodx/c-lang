#include <stdio.h>
#include <assert.h>   // для функции assert
 
void writeTextToFile(char*, char*);
 
int main(void){
    char* filename = 0;
    char* text = "Hello METANIT.COM";
    writeTextToFile(filename, text);
}
 
void writeTextToFile(char* file_name, char* text)
{
    // проверка предусловий 
    // если это условие ложно, вызывает функцию abort(), которая завершает выполнение программы. 
    assert(file_name!=NULL && "Error! File name is incorrect!\n"); // если имя файла не указано, выход из функции
    assert(text != NULL && "Error! Text is incorrect!\n");    // если текст не указан
     
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