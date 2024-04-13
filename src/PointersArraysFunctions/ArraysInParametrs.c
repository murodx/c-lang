#include <stdio.h>
// ожидаем массив как минимум с 4 элементами
// void twice(int numbers[static 4])
void twice(size_t n, int p[]){
    for(size_t i = 0; i < n; i++){
        p[i] = p[i] * 2;
    }
}
void twiceP(size_t n, int *p){
    for(size_t i=0; i<n; i++)
    {
        *p= *p * 2; // увеличиваем значение по указателю
        p = p + 1; // перемещаем указатель на следующий элемент
    }
}

int main(void){
    int nums[] = {1,2,3,4,5};
    size_t length = sizeof(nums)/sizeof(nums[0]);

    // Так как передача массива в функцию фактически представляет передачу адреса первого элемента
    twice(length,nums);
    twiceP(length,nums);

    for(size_t i = 0; i < length; i++){
        printf("%d \t",nums[i]);
    }
}