#include <stdio.h>
 
#define BEGIN {
#define END }
#define N 23
  
int main(void)
BEGIN
    int x = N;
    printf("Number: %d", x);   // Number: 23
    return 0;
END