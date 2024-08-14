#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
void find(char*, char*, size_t);
void find_word(char*, char*, size_t, FILE*);
 
int main(void){
    char* filename ="test.txt";
    char word[] = "hello";
    size_t size = sizeof(word);
 
    find(filename, word, size);
}
 
void find_word(char* buffer, char* word, size_t word_size, FILE* file_pointer){
    int found = 0; // индикатор, что слово найдено
    while(fgets(buffer, word_size, file_pointer))
    {
        if(strcmp(word, buffer)==0)
        {
            found = 1;
            break;
        }
    }
    if(found) 
    {
        printf("Success! Word found!\n");
    }
    else
    {
        printf("Word not found...\n");
    }
}
 
void find(char* file_name, char* word, size_t word_size)
{
    FILE* file_pointer = 0;
    char* buffer = 0;
 
    if(file_name && word && (word_size>0)) // если указано имя файла и слово для поиска и его размер больше 0
    {
        if((file_pointer=fopen(file_name, "r")))    // если файл открыт для чтения
        {
            if((buffer=malloc(word_size)))      // если память выделена
            {
                // собственно поиск слова в файле
                find_word(buffer, word, word_size, file_pointer);
                free(buffer);
            }
            else
            {
                printf("Error! Unable to locate memory!\n");
            }
            fclose(file_pointer);
        }
        else{
            printf("Error! Unable to open file!\n");
        }
    }
    else{
        printf("Error! Params are incorrect!\n");
    }
}