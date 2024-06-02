#include <stdio.h>
#define unite(a,b,c) a##b##c;
 // Здесь склеиваются три числа, которые передаются в макрос print. Или аналогичный пример:
int main(void)
{
    int x = unite(2, 81, 34);   // 28134
    printf("%d \n", x);
    return 0;
}