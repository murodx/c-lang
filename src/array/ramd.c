#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Инициализация генератора случайных чисел
    srand(time(NULL));

    // Генерация случайного числа от 1 до 11
    int randomNumber = rand() % 9 + 1;

    // Вывод случайного числа
    printf("Случайное число от 1 до 9: %d\n", randomNumber);

    return 0;
}
