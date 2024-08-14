#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  
typedef enum{
    ERROR,
    WORD_FOUND,
    WORD_NOTFOUND
} status;
 
status find(char*, char*, size_t);
status find_word(FILE*, char*, size_t, char*);
  
int main(void){
    char* filename ="test.txt";
    char word[] = "hello";
    size_t size = sizeof(word);
  
    status result = find(filename, word, size);
 
    switch (result)
    {
        case WORD_FOUND:
            printf("Success! Word found!\n");
            break;
        case WORD_NOTFOUND:
            printf("Word not found...\n");
            break;
        default: 
            printf("Error occured...\n");
            break;
    }
}      
 
// поиск слова
status find_word(FILE* file_pointer, char* word, size_t word_size, char* buffer){
 
    while(fgets(buffer, word_size, file_pointer)){
         
        if(strcmp(word, buffer)==0){ 
 
            return WORD_FOUND;   // если нашли слово
        }
    }
    return WORD_NOTFOUND;        // если не нашли слово
}
  
status find(char* file_name, char* word, size_t word_size)
{
    FILE* file_pointer = 0;
    char* buffer = 0;
    status result = ERROR;
  
    // если file_name != NULL и word != NULL и файл октрыт, и память выделена
    if(file_name && word && (file_pointer=fopen(file_name, "r")) && (buffer=malloc(word_size))) 
    {
        result = find_word(file_pointer, word, word_size, buffer); // собственно поиск слова
    }
         
    // секция освобождения ресурсов
    if(buffer) free(buffer);
    if(file_pointer) fclose(file_pointer);
 
    return result;
}