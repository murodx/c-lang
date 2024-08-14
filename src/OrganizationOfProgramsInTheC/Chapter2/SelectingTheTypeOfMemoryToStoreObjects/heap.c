#include <stdio.h>
#include <stdlib.h>


int *fill_and_print_array(int size){
    int *array = (int*)malloc(size * sizeof(int));
    if(!array){
        printf("Memory allocation failed!\n");
        exit(1);
    }
    for (int i = 0; i < size; i++){
        array[i] = i + 1;
    }
    return array;
}

int main() {
    int size = 10;
    int *ptr = fill_and_print_array(size);
    for (int i = 0; i < size; i++){
        printf("%d",ptr[i]);
    }
    printf("\n");
    free(ptr);
    return 0;
}