#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
 
// результат поиска
typedef enum {ERROR, FOUND, NOTFOUND} status;
 
typedef struct
{
    FILE* file_pointer;
    char* buffer;
    char* word;
    size_t word_size;
} Resources;
 
status find(char*, char*, size_t);
status find_word(Resources*);
Resources* constructor(char*, char*, size_t);
void destructor(Resources*);
 
Resources* constructor(char* file_name, char* word, size_t word_size)
{
    // если не соблюдаются предусловия, завершаем функцию
    assert(file_name!=NULL && "File name is invalid!");
    assert(word!=NULL && "Word is invalid!");
 
    Resources* resources = malloc(sizeof(Resources));
    if(resources)
    {
        // открываем файл
        resources->file_pointer=fopen(file_name, "r");
        // выделяем память для буфера
        resources->buffer = malloc(word_size);
        // если при выделении какого-то ресурса произошла ошибка
        if(!resources->file_pointer || !resources->buffer)
        {
            destructor(resources);  // вызываем деструктор, который освобождает остальные ресурсы
            return NULL;
        }
        resources->word = word;
        resources->word_size = word_size;
    }
    return resources;
}
 
// деструктор - освобождаем ресурсы
void destructor(Resources* res)
{
    if(res)   // если ресурсы ранее были выделены
    {
        if(res->buffer)   // если буфер выделен
        {
            free(res->buffer); // освобождаем память буфера
        }
        if(res->file_pointer) // если файл был открыт
        {
            fclose(res->file_pointer);    // закрываем файл
        }
        free(res);
    }
}
 
status find(char* file_name, char* word, size_t word_size)
{
    status result;
    Resources* res = constructor(file_name, word, word_size);
    result = find_word(res);
    destructor(res);
 
    return result;
}
// поиск слова
status find_word(Resources* res)
{
    if(res == NULL)   // если выделение ресурсов прошло неудачно
    {
        return ERROR;       // возвращаем код ошибки
    }
    while(fgets(res->buffer, res->word_size, res->file_pointer)){
         
        if(strcmp(res->word, res->buffer)==0){ 
 
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