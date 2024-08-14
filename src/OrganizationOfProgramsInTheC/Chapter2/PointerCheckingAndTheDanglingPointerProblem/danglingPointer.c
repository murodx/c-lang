#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int getFileLength(FILE* fp){
    fseek(fp,0,SEEK_END);
    // ftell возвращает количество байтов от начала файла до текущей позиции указателя, которая в этом случае будет конец файла.
    int file_length = ftell(fp);
    return file_length;
}
void readFile(FILE* fp, char* buffer, int file_length){
    fseek(fp,0,SEEK_SET);
    int read_elements = fread(buffer,1,file_length,fp);
    buffer[read_elements] = '\0';
}
void printFile(char* filename){
    FILE* fp = 0;
    char *text = 0;

    assert(filename && "Invalid file name");

    fp = fopen(filename,"r");
    assert(fp && "Unable to open file!\n");

    int file_length = getFileLength(fp);
    if(file_length > 0){
        text = malloc(file_length + 1);
        if(text){
            readFile(fp,text,file_length);
            printf("%s\n",text);

            free(text);
            text = 0;
        }
    }
    fclose(fp);
    fp = 0;
}
int main() {
    char *filename = "test.txt";
    printFile(filename);
}