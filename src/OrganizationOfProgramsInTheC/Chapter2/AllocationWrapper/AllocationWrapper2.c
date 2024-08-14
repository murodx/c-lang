#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void *create(size_t size) {
    void *buffer = malloc(size);
    assert(buffer && "Unable to allocate memory");
    return buffer;
}

void delete(void *buffer){
    free(buffer);
    buffer = 0;
}
int getFileLength(char *filename){
    FILE *fp = fopen(filename,"r");
    assert(fp && "Unable to open file");
    fseek(fp,0,SEEK_END);
    int file_length = ftell(fp);
    fclose(fp);
    return file_length;
}

void readFile(char *filename,char *buffer, int file_length){
    FILE *fp = fopen(filename,"r");
    assert(fp && "Unable to open file");
    int read_elemts = fread(buffer,1,file_length,fp);
    buffer[read_elemts] = '\0';
    fclose(fp);
}
void printFile(char *filename){
    char *text = 0;

    assert(filename && "Invalid file name");

    int file_length = getFileLength(filename);
    if(file_length > 0){
        text = create(file_length + 1);
        readFile(filename,text,file_length);
        printf("%s\n",text);
        delete(text);
    }
}

int main(){
    char *filename = "test.txt";
    printFile(filename);
}