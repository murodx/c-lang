#include <stdio.h>

int main(){
    int arr1[3] = {1,2,3};
    int arr2[3] = {4,5,6};
    int arrays[6];
    for(int i = 0; i < 3; i++){
        arrays[i] = arr1[i]; // Копирование элементов из arr1
        arrays[i + 3] = arr2[i];        
    }
    for(int j = 0; j < 6; j++){
        printf("%d ",arrays[j]);
    }
    
}