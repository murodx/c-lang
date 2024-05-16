#include <stdio.h>

int fibonachi(int n) {
    if(n == 0 || n == 1) return n;

    return fibonachi(n-1)+fibonachi(n-2);
}
int main() {
    int fib4 = fibonachi(4);
     printf("4 Fibonachi number: %d \n", fib4);
}