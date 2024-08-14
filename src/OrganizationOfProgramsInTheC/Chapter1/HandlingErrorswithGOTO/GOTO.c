#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

// Оператор GOTO не использовать никогда
 
// результат поиска
typedef enum {ERROR, FOUND, NOTFOUND} status;
 
status find(char*, char*, size_t);
status find_word(FILE*, char*, size_t, char*);
 
status find(char* file_name, char* word, size_t word_size)
{
    FILE* file_pointer = 0;
    char* buffer = 0;
    status result = ERROR;
 
    // если не соблюдаются предусловия, завершаем функцию
    assert(file_name!=NULL && "File name is invalid!");
    assert(word!=NULL && "Word is invalid!");
 
   // если НЕ удалось открыть файл
    if(!(file_pointer=fopen(file_name, "r"))){    
        goto error_fileopen;
    }
    // если память НЕ выделена
    if(!(buffer=malloc(word_size))) {
        goto error_malloc;
    }
         
    result = find_word(file_pointer, word, word_size, buffer); // собственно поиск слова 
     
// секция освобождения ресурсов
    free(buffer);
error_malloc:
    fclose(file_pointer);
error_fileopen:
    return result;
}
// поиск слова
status find_word(FILE* file_pointer, char* word, size_t word_size, char* buffer){
 
    while(fgets(buffer, word_size, file_pointer)){
         
        if(strcmp(word, buffer)==0){ 
 
            return FOUND;   // если нашли слово
        }
    }
    return NOTFOUND;        // если не нашли слово
}
 
int main(void){
    char* filename ="test.txt";
    char word[] = "hello";
    size_t size = sizeof(word);
 
    status result = find(filename, word, size);
 
    switch(result) {
        case ERROR:
            printf("Error!\n");
            break;
        case NOTFOUND:
            printf("Text not found...\n");
            break;
        case FOUND:
            printf("Success! Text found!\n");
            break;
         
    }
}