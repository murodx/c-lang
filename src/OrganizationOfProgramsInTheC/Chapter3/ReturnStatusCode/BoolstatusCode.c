#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
 
int find(char*, char*, size_t);
int find_word(FILE*, char*, size_t, char*);
  
int main(void){
    char* filename ="test32.txt";
    char word[] = "hello";
    size_t size = sizeof(word);
  
    if(find(filename, word, size))
    {
        printf("Success! Word found!\n");
    }
    else
    {
        printf("Word not found...\n");
    }
}      
 
// поиск слова
int find_word(FILE* file_pointer, char* word, size_t word_size, char* buffer)
{
    while(fgets(buffer, word_size, file_pointer))
    {    
        if(strcmp(word, buffer)==0)
        {
            return 1;   // если нашли слово
        }
    }
    return 0;        // если не нашли слово
}
  
int find(char* file_name, char* word, size_t word_size)
{
    FILE* file_pointer = 0;
    char* buffer = 0;
    int result = 0; // возвращаемый результат
  
    // если не соблюдаются предусловия, завершаем функцию
    assert(file_name!=NULL && "File name is invalid!");
    assert(word!=NULL && "Word is invalid!");
 
   // если удалось открыть файл и выделить память
    if((file_pointer=fopen(file_name, "r")) && (buffer=malloc(word_size))) 
    {
        result = find_word(file_pointer, word, word_size, buffer); // собственно поиск слова
    }
         
    // секция освобождения ресурсов
    if(buffer) free(buffer);
    if(file_pointer) fclose(file_pointer);
 
    return result;
}