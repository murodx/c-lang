#include <stdio.h>
#define MAX(a,b) (a > b ? a : b)

int main(){
    int a = 5;
    int b = 10;
    int maxResult = MAX(a,b);
    printf("Max number: %d", maxResult);
    printf("%d \n", MAX(a,b));
    return 0;
}