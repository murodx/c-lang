#include <stdio.h>

void count_calls() {
    static int count = 0;  // Статическая переменная, хранится в статической памяти
    count++;
    printf("Functiom called %d times\n",count);
}

int main() {
    count_calls();
    count_calls();
    count_calls();
}