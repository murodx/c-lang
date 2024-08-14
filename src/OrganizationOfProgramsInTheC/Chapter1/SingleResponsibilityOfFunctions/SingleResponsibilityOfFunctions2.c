#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef enum{
    WORD_FOUND,
    WORD_NOT_FOUND,
    PARAMS_ERROR,
    MEMORY_ERROR,
    FILE_ERROR
} status;

void find(char*,char*,size_t);
status find_word(char*,char*,size_t,FILE*);
void process_result(status);

int main() {
    char *filename = "test.txt";
    char word[] = "hello";
    size_t size =  sizeof(word);

    find(filename,word,size);
}

status find_word(char *buffer, char *word, size_t word_size,FILE* file_pointer){
    while (fgets(buffer,word_size,file_pointer)){
        if(strcmp(word,buffer)==0){
            return WORD_FOUND;
        }
    }
    return WORD_NOT_FOUND;    
}

void find(char *file_name, char *word, size_t word_size){
    FILE *file_pointer = 0;
    char *buffer = 0;
    status status_code = PARAMS_ERROR;
    if(file_name && word && (word_size>0)){
        status_code = FILE_ERROR;
        if((file_pointer=fopen(file_name,"r"))){
            status_code = MEMORY_ERROR;
            if((buffer=malloc(word_size))){
                status_code = find_word(buffer,word,word_size,file_pointer);
                free(buffer);
            }
            fclose(file_pointer);
        }
    }
    process_result(status_code);
}


void process_result(status status_code){
    switch (status_code)
    {
    case WORD_FOUND:
        printf("Success! Word found!\n");
        break;
    case WORD_NOT_FOUND:
        printf("Word not found...\n");
        break;
    case PARAMS_ERROR:
        printf("Error! Params are incorrect!\n");
            break;
    case MEMORY_ERROR:
        printf("Error! Unable to locate memory!\n");
            break;
    case FILE_ERROR:
        printf("Error! Unable to open file!\n");
            break;
    }
}