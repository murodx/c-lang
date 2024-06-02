#include <stdio.h>
#define N 22

int main(){
    int n = N;
    printf("%d",n);
    #undef N
    return 0;
}