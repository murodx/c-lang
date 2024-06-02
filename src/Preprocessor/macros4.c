#include <stdio.h>
#define print(a,b,c) printf("%d", a##b##c);
 // Директива ## позволяет объединять две лексемы:s
int main(void)
{
    print(2, 81, 34);   // 28134
    return 0;
}