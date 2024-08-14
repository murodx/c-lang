#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef enum {
    FILENAME_INVALID,
    WORD_INVALID,
    FILEOPEN_ERROR,
    ALLOCATION_ERROR,
    WORD_FOUND,
    WORD_NOTFOUND
} status;


status find(char *,char *, size_t);
status find_word(char *,char*,size_t,FILE*);


int main(void){
    char* filename ="test.txt";
    char word[] = "hello";
    size_t size = sizeof(word);
  
    status result = find(filename, word, size);
    char* status_messages[6] = 
    {
        "Invalid filename\n",
        "Invalid word\n",
        "Unable to open the file\n",
        "Unable to allocate memory\n",
        "Success! Word found!\n",
        "Word not found...\n"
    };
    printf("%s",status_messages[result]);
}     
status find_word(char* buffer, char* word, size_t word_size, FILE* file_pointer){
    while (fgets(buffer,word_size,file_pointer)){
        if(strcmp(word, buffer)==0){
            return WORD_FOUND;
        }
    }
    return WORD_NOTFOUND;
}
status find(char *file_name,char *word, size_t word_size){
    FILE *file_pointer = 0;
    char *buffer = 0;
    status result;

    if(!file_name){
        return FILENAME_INVALID;
    }
    if(!word) {
        return WORD_INVALID;
    }
    if(!(file_pointer=fopen(file_name,"r"))){
        return FILEOPEN_ERROR;
    }
    if((buffer=malloc(word_size))){
        result = find_word(buffer,word,word_size,file_pointer);
        free(buffer);
    }
    else {
        result = ALLOCATION_ERROR;
    }
    fclose(file_pointer);
    return result;
}