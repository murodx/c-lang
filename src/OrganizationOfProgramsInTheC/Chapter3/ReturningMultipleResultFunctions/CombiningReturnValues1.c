#include <stdio.h>
#include <assert.h>

typedef struct {
    int min;
    int max;
} MinMax;

MinMax getMinMax(int *array,size_t length){
    assert(length>1 && "Array length is imvalid");
    MinMax result;
    result.min = array[0];
    result.max = array[0];
    for (size_t i = 0; i < length; i++){
        if (array[i] < result.min) result.min = array[i];
        if (array[i] > result.max) result.max = array[i];
    }
    return result;
}
int main() {
    int array[] = {2, 3, 4, 5, 6, 9};
    int length = sizeof(array) / sizeof(int);
    MinMax data = getMinMax(array,length);
    printf("min=%d\n", data.min);     // min=2
    printf("max=%d\n", data.max);     // max=9
}