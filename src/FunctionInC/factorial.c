#include <stdio.h>
int factorial(int n) {
    if(n==1)
    {
        return 1;
    }
    return  n * factorial(n-1);
}

int main() {
    int factorial4 = factorial(4);  
    printf("factorial of 4: %d \n",factorial4);
    return 0;

}